from collections import defaultdict
class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        g = defaultdict(list)
        index = 0 
        final = []
        #build your graph
        for i in graph:
            g[index] = i
            index+=1
        dfs(g,0,final,[],len(graph)-1)
        return final
            
            
                      
def dfs(g,curr_vertex,final,temp,n):
    temp.append(curr_vertex)
    for next_vertex in g[curr_vertex]:
        if next_vertex == n:
                k = temp+[next_vertex]
                final.append(k)
        else:
            dfs(g,next_vertex,final,temp,n)
            temp.pop()
#https://leetcode.com/problems/all-paths-from-source-to-target/