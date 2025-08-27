from heapq import heappush, heappop

def solution(maps):
    max_row = len(maps)
    max_col = len(maps[0])
    
    for r in range(len(maps)):
        for c in range(len(maps[0])):
            if maps[r][c] == 1:
                maps[r][c] = float('inf')
            else:
                maps[r][c] = 0
    
    maps[0][0] = 1
    
    queue = []
    heappush(queue, (1, 0, 0))
    
    while queue:
        cur_val, cur_row, cur_col = heappop(queue)
        
        for rd, cd in ((-1, 0), (0, 1), (1, 0), (0, -1)):
            new_row, new_col = cur_row + rd, cur_col + cd
            
            if new_row in range(max_row) and new_col in range(max_col) and maps[new_row][new_col] != 0:
                if cur_val + 1 < maps[new_row][new_col]:
                    maps[new_row][new_col] = cur_val + 1
                    heappush(queue, (cur_val + 1, new_row, new_col))
    
    return -1 if maps[max_row-1][max_col-1] == float('inf') else maps[max_row-1][max_col-1]
    
    
    
    
    