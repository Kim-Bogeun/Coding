def solution(participant, completion):
    par_set = {}

    for pa in participant:
        if pa in par_set:
            par_set[pa] += 1
        else:
            par_set[pa] = 1
    
    for com in completion:
        par_set[com] -= 1
        

    for i in par_set:
        if par_set[i] != 0:
            return i