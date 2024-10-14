def Calcu(num1, num2, operator):
    if operator == '+':
        return num1 + num2
    elif operator == '-':
        return num1 - num2
    elif operator == '*':
        return num1 * num2
    elif operator == '/':
        return num1 / num2
    elif operator == '%':
        return num1 % num2
    else:
        return "Invalid operator!!"
    
while True:
    try:
        num1 = int(input("Enter a number: "))
        num2 = int(input("Enter a number: "))
        operator = (input("Enter an operator: "))
        
        print(Calcu(num1,num2,operator))
    except ZeroDivisionError:
        print("You can't divide to 0, don't put a 0 in second number.")
        print("Thank you for understanding ;).")