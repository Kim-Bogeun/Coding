def solution(arr):
    answer = []
    n = len(arr)
    
    answer.append(arr[0])
    
    if(n <= 1):
        return answer
    
    for i in range(1, n):
        if arr[i] != answer[-1]:
            answer.append(arr[i])
    
    return answer