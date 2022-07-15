n,x = list(map(int,input().split()))
coins = list(map(int,input().split()))
dp = [float('inf')] * (x + 1)
dp[0] = 0

for coin in coins:
    for i in range(coin, x + 1):
        dp[i] = min(dp[i], dp[i - coin] + 1)
print(dp[x] if dp[x] != float('inf') else -1)