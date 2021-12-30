def solve(arr):
    n=len(arr)
    dp=[0]*n 
    for i in range(n):
        for j in range(i+1,n):
            if arr[j]%arr[i]==0 or arr[i]%arr[j]==0:
                dp[i]+=1
                dp[j]+=1
    return dp

print(solve([2,3,4,5,6]))
print(solve([6,6,6,6,6]))