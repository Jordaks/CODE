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
"""

print("\n")
print("for loop with list")
num = [1,2,3,4,5]

for i in num:
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

for l in greet(6, 0, -1):
    print(l , end=" ")
print("\n")