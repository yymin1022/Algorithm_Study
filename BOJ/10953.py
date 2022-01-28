num = int(input())

for i in range(num):
    inputStr = input()
    a = int(inputStr.split(",")[0])
    b = int(inputStr.split(",")[1])
    
    print(a + b)