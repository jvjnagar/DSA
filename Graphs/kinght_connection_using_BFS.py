from collections import deque
import math

#refer the mantra softech interview for quation, its about number of turns taken by two knights to meet each other on chess board.
knight_moves = [(-2,1), (-1,2), (1,2), (2,1), (2,-1), (1,-2), (-1,-2), (-2,-1)]

def knight_connection(posA, posB):
    # breadth first search approach
    turn = 0
    q = deque([])
    q.append((turn, posA, posB))
    while q:
        turn, posA, posB = q.popleft()
        for dx, dy in knight_moves:
            new_posA = (posA[0] + dx, posA[1] + dy)
            if new_posA == posB:
                return turn+1
            q.append(new_posA)
            for dx, dy in knight_moves:
                new_posB = posB[0] + dx, posB[1] + dy
                if new_posA == new_posB:
                    return turn+1
                q.append(new_posB)
            turn+=1

posA = [0, 0]
posB = [4, 2]
print(math.ceil(knight_connection(posA, posB)/2))
            
            

    
