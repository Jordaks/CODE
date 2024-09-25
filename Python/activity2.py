print("\n\t\t\tMovie Ticketing System\n")
name = str(input("Enter your name: "))
age = int(input("Enter your age: "))
time = int(input("Enter the time of the show (in 24-hour format, e.g., 14 for 2 PM): "))

if age < 12:
    if time <= 17:
        print("Hello " + name + "!" , "The ticket price for you is: $5. Thank you!")
    elif(time <= 24):
        print("Hello " + name + "!" , "The ticket price for you is: $7. Thank you!")
    else:
        print("Invalid Time!!")
        print("Hello " + name + "!" , "The ticket price for you is: $7. Thank you!")
elif age <= 60:
    if time <= 17:
        print("Hello " + name + "!" , "The ticket price for you is: $10. Thank you!")
    elif(time <= 24):
        print("Hello " + name + "!" , "The ticket price for you is: $12. Thank you!")
    else:
        print("Invalid Time!!")
else:
    if time <= 17:
        print("Hello " + name + "!" , "The ticket price for you is: $6. Thank you!")
    elif(time <= 24):
        print("Hello " + name + "!" , "The ticket price for you is: $8. Thank you!")
    else:
        print("Invalid Time!!")
