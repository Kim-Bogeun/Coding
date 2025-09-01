def solution(phone_book):
    dict = {}
    
    for phone in phone_book:
        dict[phone] = 1
        
    for phone in phone_book:
        temp = ""
        for char in phone[:-1]:
            temp += char
            
            if temp in dict:
                return False
            
    return True