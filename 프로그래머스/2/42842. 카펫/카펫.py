def solution(brown, yellow):
    for i in range(1, yellow + 1):
        if( yellow % i == 0):
            if 2*(i + yellow/i) + 4 == brown:
                return [yellow/i + 2, i + 2]
            
    
    
        