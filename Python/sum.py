sum1 = 0

for i in range(5):
    print(i, end=(" "))
    sum1 += i
print("= " ,sum1)

print(sum(range(5)))

my_list = list(range(10))

txt = "HEll0"

for i in range(len(txt)):
    print(txt[i], end=" ")
    
print()

lang = str(input("Enter a Language: "))

languages = ["C++", "Java", "Python", "C"]

for language in languages:
    if language == lang:
        print("we found ", lang)
        break
else:
    print("Not found!")
    
    