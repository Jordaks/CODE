def AgeCalcu(name, age):
    year = 2024
    old = 100
    tot = old + year
    total = tot - age
    print(name,"you will turn ",old, " year old in the year ",total)

name = str(input("Enter your name: "))
age = int(input("Enter your age: "))
AgeCalcu(name,age)