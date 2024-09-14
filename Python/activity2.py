print("\n\t\t\tMovie Ticketing System\n")
name = str(input("Enter your name: "))
age = int(input("Enter your age: "))
time = int(input("Enter the time of the show (in 24-hour format, e.g., 14 for 2 PM): "))

if age < 12:
    if time == 1 or time == 2 or time == 3 or time == 4 or time == 5 or time == 6 or time == 7 or time == 8 or time == 9 or time == 10 or time == 11 or time == 12 or time == 13  or time == 14 or time == 15 or time == 16 or time == 17:
        print("Hello " + name + "!" , "The ticket price for you is: $5. Thank you!")
    else:
        print("Hello " + name + "!" , "The ticket price for you is: $7. Thank you!")
elif age <= 60:
    if time == 1 or time == 2 or time == 3 or time == 4 or time == 5 or time == 6 or time == 7 or time == 8 or time == 9 or time == 10 or time == 11 or time == 12 or time == 13  or time == 14 or time == 15 or time == 16 or time == 17:
        print("Hello " + name + "!" , "The ticket price for you is: $10. Thank you!")
    else:
        print("Hello " + name + "!" , "The ticket price for you is: $12. Thank you!")
elif age > 60:
    if time == 1 or time == 2 or time == 3 or time == 4 or time == 5 or time == 6 or time == 7 or time == 8 or time == 9 or time == 10 or time == 11 or time == 12 or time == 13  or time == 14 or time == 15 or time == 16 or time == 17:
        print("Hello " + name + "!" , "The ticket price for you is: $6. Thank you!")
    else:
        print("Hello " + name + "!" , "The ticket price for you is: $8. Thank you!")
else:
    print("Invalid Time")

