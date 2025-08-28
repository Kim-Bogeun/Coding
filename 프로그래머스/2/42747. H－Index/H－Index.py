def solution(citations):
    sort_cite = sorted(citations, reverse=True)
    
    for i in range(len(sort_cite)):
        if(sort_cite[i] < i + 1):
            return i
    
    return len(sort_cite)
                   
    
        
                  
                   
        
        