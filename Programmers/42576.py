def solution(participant, completion):
    answer = ''
    participant.sort()
    completion.sort()
    
    for i in range(len(participant)):
        if participant[i - 1] != completion[i - 1]:
            return participant[i - 1]