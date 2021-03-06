while(True):
    try:
        inputNum = input()
        print(int(inputNum.split(" ")[0]) + int(inputNum.split(" ")[1]))
    except:
        break