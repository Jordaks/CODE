"""def student_grade(grade):
    if grade >= 90:
        return grade, "A"
    elif grade >= 80:
        return grade, "B"
    elif grade >= 70:
        return grade, "C"
    elif grade >= 60:
        return grade, "D"
    else:
        return grade, "F"
grade = int(input("Enter your grade: "))
print(student_grade(grade))
"""
while True:
    try:
        num = int(input("Enter a number: "))
        if num > 0:
            print(num, " is positive integer")
            break
        else:
            if num <= 0:
                print(num, " is not positive integer")
    except ValueError:
        print("Invalid input!!")
    except ZeroDivisionError:
        print("You can't divide to 0!!")
    except IndexError:
        print("Index error!!")
    except SystemError:
        print("System Error!!")
    else:
        print("else")
    finally:
        print("Finally!!")
