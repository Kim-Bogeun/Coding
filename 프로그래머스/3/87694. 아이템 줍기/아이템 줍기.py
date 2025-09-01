from collections import deque

def inside(rects, i, j):
    for x1, y1, x2, y2 in rects:
        if x1 <= i and i+1 <= x2 and y1 <= j and j+1 <= y2:
            return True
    return False

def on_border(rects, x, y, nx, ny):
    if x == nx and abs(y - ny) == 1:
        left  = inside(rects, x-1, min(y, ny))
        right = inside(rects, x,   min(y, ny))
        return left != right
    if y == ny and abs(x - nx) == 1:
        below = inside(rects, min(x, nx), y-1)
        above = inside(rects, min(x, nx), y)
        return below != above
    return False

def solution(rectangle, characterX, characterY, itemX, itemY):
    xs = [a for r in rectangle for a in (r[0], r[2])]
    ys = [a for r in rectangle for a in (r[1], r[3])]
    min_x, max_x = min(xs), max(xs)
    min_y, max_y = min(ys), max(ys)

    q = deque([(characterX, characterY, 0)])
    visited = set([(characterX, characterY)])

    while q:
        x, y, d = q.popleft()
        if (x, y) == (itemX, itemY):
            return d
        for dx, dy in ((1,0),(-1,0),(0,1),(0,-1)):
            nx, ny = x+dx, y+dy
            if not (min_x <= nx <= max_x and min_y <= ny <= max_y):
                continue
            if (nx, ny) in visited:
                continue
            if on_border(rectangle, x, y, nx, ny):
                visited.add((nx, ny))
                q.append((nx, ny, d+1))
    return -1