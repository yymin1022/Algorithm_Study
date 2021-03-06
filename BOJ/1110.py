inputNum = int(input())
count = 0
num = inputNum

while True:
    num1 = num // 10
    num2 = num % 10
    numResult = num1 + num2
    count += 1
    num = int(str(num % 10) + str(numResult % 10))

    if inputNum == num:
        print(count)
        break