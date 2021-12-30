from typing import *
from heapq import *
class Solution:
    def minimumEffortPath(self, g: List[List[int]]) -> int:
        row = len(g)
        col = len(g[0])
        dist = {(i,j):float('infinity') for i in range(row) for j in range(col)}
        dist[0,0] = 0
        heap = [(0,(0,0))]
        while heap:
            curr_distance,index = heappop(heap)
            r,c = index
            if curr_distance > dist[index]:
                continue
            nodes = [(r+1,c),(r-1,c),(r,c+1),(r,c-1)]
            for n in nodes:
                if (n[0]<0 or n[0]>(row-1)) or (n[1]<0 or n[1]>(col-1)):
                    continue
                else:
                    diff = max(curr_distance,abs(g[r][c]-g[n[0]][n[1]]))
                    if diff < dist[n]:
                        dist[n] = diff
                        heappush(heap,(diff,n))
        return dist[row-1,col-1]
#https://leetcode.com/problems/path-with-minimum-effort/