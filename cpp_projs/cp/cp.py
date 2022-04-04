name, age = input("Enter your name and age: ").split()
if (name[0] == 'A' or name[0] == 'a') and int(age) > 14:
    print("You can play")
else:
    print("You can't play")
