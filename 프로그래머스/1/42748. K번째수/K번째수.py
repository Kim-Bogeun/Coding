def solution(array, commands):
    answer = []
    
    for com in commands:
        arr_can = sorted(array[ com[0]-1 : com[1] ])
        
        answer.append(arr_can[com[2]-1])
        
    return answer
        