while True:
    print("Continue? Y/N")
    response = input()
    
    if response.islower():
        print("It's lower!")
    
    if response.lower() != 'Y':
        break
    
    