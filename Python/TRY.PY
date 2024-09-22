"""first_name = ["Mark","Jordan"]
last_name = ["Berber","Javier"]
print(first_name + last_name)

last_name.append("Terrenal")
last_name = last_name + ["Terrenal"]

print(last_name)


print(str(int(21)) + "jordan")


print("what is ypu age?")

age = int(input())


if age > 65:
    print("hey, you get a special discount!")

elif age > 20:
    print("welcome to our app!")

print("thanks for using our app!!")


print("\n")
print("for loop with list")
CARS = ["SUPRA","MUSTANG","NISSAN","BMW","PORSCHE"]

for i in CARS:
    print(i , end=" ")
    
print("\n")

print("===========", "\n")

print("for loop")
                    #start   #end    #step
for j in range(1,       6,      1):
    print(j , end=" ")
print("\n")

print("===========", "\n")

greet = "HELLO"

for k in greet:
    print(k , end=" ")
print("\n")

print("===========", "\n")

#for loop
for i in range(5):
    print(i, end=" ")
    i+=1
print()

#while loop

j = 0

while j < 5:
    print(j, end=" ")
    j+=1
print()

#do while in python
password = "DAN"
while True:
    passw = str(input("Enter a password: "))
    if passw == password:
        break
    else:
        print("WRONG PASSWORD!!")
        
"""
#nested loop

for x in range(3):
    print(x)
    for y in range(4):
        print(y, end=" ")
    print()
    print()
        
    
