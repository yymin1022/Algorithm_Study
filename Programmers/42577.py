def solution(phone_book):
    answer = True
    
    for i in range(len(phone_book)):
        for j in range(len(phone_book)):
            if i != j and phone_book[i].startswith(phone_book[j]):
                answer = False
                return answer
    
    return answer