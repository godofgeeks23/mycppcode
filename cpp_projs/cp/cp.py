def check(num):
    num = str(num)
    if (int(num) < 20 and int(num)%2 == 0) or (len(num) ==2 and int(num)%11 == 0):
        return 1
    if len(num) <= 2 and int(num)%2 != 0:
        return 0

    A = num[0]
    B = num[1]
    remaining = num[2:-2]
    Y = num[-2]
    Z = num[-1]

    if A == '1':

        if B == Z:

            check(remaining + (str(int(Y)-1) if Y != '0' else '9'))
        elif int(B)-1 == int(Z):
            check('1' + remaining + (str(int(Y)-1) if Y != '0' else '9'))
        else:
            # print("Not able to formed by a sum of a number and its reversed.")
            return 0
    else:

        if A == Z:

            check(B + remaining + Y)
        elif int(A) - 1 == int(Z):

            check('1' + B + remaining + Y)
        else:
            # print("Not able to formed by a sum of a number and its reversed.")
            return 0
count = 0
n = int(input("Enter a number: "))
list = []
for i in range(n):
    num = int(input())
    if(check(num)):
        count += 1

print(count)