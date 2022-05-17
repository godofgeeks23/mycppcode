sum = 0
print("The first n positive numbers having the total sum less than 100 are:")
for i in range(1, 100):
    while((sum+i) < 100):
        sum += i
        print(i, end=" ")
        break
print("Sum of numbers = ", sum)
