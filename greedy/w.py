from multiprocessing import Process
from collections import Counter
from time import time
def solve(r):
	d = Counter(r)
	print(d[3]+d[1])

pr = []

start = time()

for _ in range(int(input())):
    n= int(input())
    r = list(map(int,input().split()))
    p = Process(target=solve,args=(r,))
    p.start()
    pr.append(p)


for p in pr:
	p.join()
	
end = time()
print(end-start)