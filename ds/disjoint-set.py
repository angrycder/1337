class DSU:
    def __init__(self, N):
        self.p = list(range(N))

    def find(self, x):
        if self.p[x] != x:
            self.p[x] = self.find(self.p[x])
        return self.p[x]

    def union(self, x, y):
        xr = self.find(x)
        yr = self.find(y)
        self.p[xr] = yr

from collections import OrderedDict
class LRUCache:
    def __init__(self, capacity: int):
        self.cap = capacity
        self.d = OrderedDict()
    
    def get(self, key: int) -> int:
        if key in self.d:
            self.d.move_to_end(key)
        
        return self.d.get(key, -1)
        
    def put(self, key: int, value: int) -> None:
        self.d[key] = value
        self.get(key)
        
        if len(self.d) > self.cap:
            self.d.popitem(last=False)

class segtree:
    def __init__(self, arr):
        self.n = len(arr)
        self.arr=arr
        self.tree=[0]*(2*self.n)
        for i in range(self.n):
            self.tree[i+self.n]=self.arr[i]
        for i in range(self.n-1,0,-1):
            self.tree[i] = self.tree[i << 1]+self.tree[i << 1 | 1]

    def update(self, i, val):
        i+=self.n
        self.tree[i] = val
        while i>1:
            self.tree[i>>1] = self.tree[i]+self.tree[i^1]
            i>>=1
        
    def query(self, l,r):
        l+=self.n
        r+=self.n
        res=0
        while l<r:
            if l&1:
                res+=self.tree[l]
                l+=1
            if r&1:
                r-=1
                res+=self.tree[r]
            l>>=1
            r>>=1
        return res

import heapq


def calculate_distances(graph, starting_vertex):
    distances = {vertex: float('infinity') for vertex in graph}
    distances[starting_vertex] = 0

    pq = [(0, starting_vertex)]
    while len(pq) > 0:
        current_distance, current_vertex = heapq.heappop(pq)

        # Nodes can get added to the priority queue multiple times. We only
        # process a vertex the first time we remove it from the priority queue.
        if current_distance > distances[current_vertex]:
            continue

        for neighbor, weight in graph[current_vertex].items():
            distance = current_distance + weight

            # Only consider this new path if it's better than any path we've
            # already found.
            if distance < distances[neighbor]:
                distances[neighbor] = distance
                heapq.heappush(pq, (distance, neighbor))

    return distances

def convert_to_nary(n,decimal_number):
    remainder_stack = []

    while decimal_number > 0:
        remainder = decimal_number % n
        remainder_stack.append(remainder)
        decimal_number = decimal_number // n

    digits = []
    while remainder_stack:
        # we could just reverse and join `remainder_stack` of course,
        # as it is simply a Python list, but popping off into another
        # list helps demonstrate that the only behavior we need from
        # `remainder_stack` is stack-like
        digits.append(str(remainder_stack.pop()))

    return ''.join(digits)