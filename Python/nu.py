import tkinter as tk
from tkinter import ttk
import json
import os

class FitnessPlanner:
    def __init__(self, master):
        self.master = master
        master.title(" Minimalist Fitness Planner")

        # User Information
        self.user_info = {}
        self.load_user_info()

        self.name_label = ttk.Label(master, text="Name:")
        self.name_label.grid(row=0, column=0, padx=10, pady=10)
        self.name_entry = ttk.Entry(master)
        self.name_entry.insert(0, self.user_info.get("name", ""))
        self.name_entry.grid(row=0, column=1, padx=10, pady=10)

        self.age_label = ttk.Label(master, text="Age:")
        self.age_label.grid(row=1, column=0, padx=10, pady=10)
        self.age_entry = ttk.Entry(master)
        self.age_entry.insert(0, str(self.user_info.get("age", "")))
        self.age_entry.grid(row=1, column=1, padx=10, pady=10)

        self.gender_label = ttk.Label(master, text="Gender:")
        self.gender_label.grid(row=2, column=0, padx=10, pady=10)
        self.gender_combobox = ttk.Combobox(master, values=["Male", "Female", "Other"])
        self.gender_combobox.current(["Male", "Female", "Other"].index(self.user_info.get("gender", "Other")))
        self.gender_combobox.grid(row=2, column=1, padx=10, pady=10)

        # Workout Plan
        self.workout_plan = self.user_info.get("workout_plan", "Beginner")
        self.plan_label = ttk.Label(master, text="Workout Plan:")
        self.plan_label.grid(row=3, column=0, padx=10, pady=10)
        self.plan_combobox = ttk.Combobox(master, values=["Beginner", "Intermediate", "Advanced"])
        self.plan_combobox.current(["Beginner", "Intermediate", "Advanced"].index(self.workout_plan))
        self.plan_combobox.grid(row=3, column=1, padx=10, pady=10)

        self.cancel_button = ttk.Button(master, text="Cancel Plan", command=self.cancel_plan)
        self.cancel_button.grid(row=4, column=0, padx=10, pady=10)

        self.new_plan_button = ttk.Button(master, text="Create New Plan", command=self.create_new_plan)
        self.new_plan_button.grid(row=4, column=1, padx=10, pady=10)

        # Progress Tracking
        self.progress_text = tk.Text(master, height=5, width=30)
        self.progress_text.grid(row=5, column=0, columnspan=2, padx=10, pady=10)
        self.load_progress()

        self.save_progress_button = ttk.Button(master, text="Save Progress", command=self.save_progress)
        self.save_progress_button.grid(row=6, column=0, padx=10, pady=10)

        self.load_progress_button = ttk.Button(master, text="Load Progress", command=self.load_progress)
        self.load_progress_button.grid(row=6, column=1, padx=10, pady=10)

    def load_user_info(self):
        try:
            with open("user_info.json", "r") as f:
                self.user_info = json.load(f)
        except FileNotFoundError:
            self.user_info = {}

    def save_user_info(self):
        self.user_info = {
            "name": self.name_entry.get(),
            "age": int(self.age_entry.get()),
            "gender": self.gender_combobox.get(),
            "workout_plan": self.plan_combobox.get()
        }
        with open("user_info.json", "w") as f:
            json.dump(self.user_info, f)

    def cancel_plan(self):
        # Implement logic to cancel the current workout plan
        self.workout_plan = "Beginner"
        self.plan_combobox.current(["Beginner", "Intermediate", "Advanced"].index(self.workout_plan))
        self.save_user_info()

    def create_new_plan(self):
        # Implement logic to create a new workout plan
        self.workout_plan = self.plan_combobox.get()
        self.save_user_info()

    def save_progress(self):
        # Implement logic to save the user's progress
        with open("progress.txt", "w") as f:
            f.write(self.progress_text.get("1.0", tk.END))

    def load_progress(self):
        # Implement logic to load the user's progress
        try:
            with open("progress.txt", "r") as f:
                progress = f.read()
            self.progress_text.delete("1.0", tk.END)
            self.progress_text.insert(tk.END, progress)
        except FileNotFoundError:
            self.progress_text.delete("1.0", tk.END)
            self.progress_text.insert(tk.END, "No progress data found.")

if _name_ == "_main_":
    root = tk.Tk()
    app = FitnessPlanner(root)
    root.mainloop()