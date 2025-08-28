def solution(answers):
    ans1 = [1, 2, 3, 4, 5]
    ans2 = [2, 1, 2, 3, 2, 4, 2, 5]
    ans3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    
    score1 = 0
    score2 = 0
    score3 = 0
    
    for i in range(len(answers)):
        if answers[i] == ans1[i % len(ans1)]:
            score1 += 1
        if answers[i] == ans2[i % len(ans2)]: 
            score2 += 1
        if answers[i] == ans3[i % len(ans3)]:
            score3 += 1
    
        
    result = []
    maxscore = max(score1, score2, score3)
    
    if score1 == maxscore:
        result.append(1)
    if score2 == maxscore:
        result.append(2)
    if score3 == maxscore:
        result.append(3)
        
    return result