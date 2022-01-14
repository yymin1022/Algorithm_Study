def solution(phone_book):
    for i in range(len(phone_book)):
        for j in range(len(phone_book)):
            if i != j and phone_book[i].startswith(phone_book[j]):
                return False
    
    return True