def oddeven(num):
        if num % 2 == 0:
            print(num, "is an Even Number")
        else:
            print(num, "is an Odd Number") 

while True:
    try:
        num = int(input("Enter a number: "))  
        oddeven(num)
    except ValueError:
        print("Invalid input!!")
