def solution(array, commands):
    answer = []
    
    for i in range(len(commands)):
        current = array[commands[i][0] - 1:commands[i][1]]
        current.sort()
        answer.append(current[commands[i][2] - 1])
    return answer