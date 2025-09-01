def dfs(computer, computers, visited):
    for node in range(len(computer)):
        if(computer[node] == 1):
            if visited[node] == False:
                visited[node] = True
            
                dfs( computers[node], computers, visited )

                print(visited)
        
        else:
            continue

def solution(n, computers):
    visited = [False] * n
    
    ans = 0

    while False in visited:
        for i in range(n):
            if visited[i] == False:
                visited[i] = True
                
                ans += 1
                
                print("dfs 진입", i)
                
                dfs(computers[i], computers, visited)           
                
                
    print(ans)
    return ans
