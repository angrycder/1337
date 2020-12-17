class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        n = len(rooms)
        if n == 1:
            return True
        visited = [False]*n
        stack =[rooms[0]]
        visited[0] = True
        while stack:
            curr = stack.pop(0)
            for i in curr:
                if visited[i]:
                    continue
                else:
                    stack.append(rooms[i])
                    visited[i]=True
        return all(visited)
#https://leetcode.com/problems/keys-and-rooms/