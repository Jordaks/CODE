name = "Mark Jordan Javier"
txt = "I'm learning python"
text = "I love pizza!"


print("My name is " + name)
print(txt)

length = len(txt)

print("The length of my text is " + str(length))
print("The length of my name is " + str(len(name)))

new_text = text[:7] + "Burger"

new_txt = text[:0] + "My favorite is Spaghetti"

print(new_text)
print(new_txt)