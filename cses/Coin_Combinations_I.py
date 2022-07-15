n,x = list(map(int,input().split()))
c = list(map(int,input().split()))
from functools import cache

dp = [0 for i in range(n)]

for i in range(n):
    
print(dp(x))