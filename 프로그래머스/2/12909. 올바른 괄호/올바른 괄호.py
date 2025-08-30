def solution(s):
    cnt = 0
    
    for char in s:
        if char == "(":
            cnt += 1 
        
        if char == ")":
            cnt -= 1
            
            
        if cnt < 0:
            return False
            
    
    if cnt == 0:
        return True

    else:
        return False