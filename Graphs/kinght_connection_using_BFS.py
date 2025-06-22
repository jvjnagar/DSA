from collections import deque
import math

knight_moves = [(-2,1), (-1,2), (1,2), (2,1), (2,-1), (1,-2), (-1,-2), (-2,-1)]

def knight_connection(posA, posB):
    # breadth first search approach
    turn = 0
    visited = set()
    q = deque()
    q.append((turn, tuple(posA), tuple(posB)))
    while q:
        turn, posA, posB = q.popleft()
        if (posA, posB) in visited:
            continue
        visited.add((posA, posB))
        for dx, dy in knight_moves:
            new_posA = (posA[0] + dx, posA[1] + dy)
            if new_posA == posB:
                return turn+1
            q.append((turn, new_posA, posB))
            for dx, dy in knight_moves:
                new_posB = posB[0] + dx, posB[1] + dy
                if new_posA == new_posB:
                    return turn+1
                q.append((turn, new_posA, new_posB))
            turn+=1

posA = [0, 0]
posB = [3, 2]
print(math.ceil(knight_connection(posA, posB)/2))
