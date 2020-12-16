class Solution:
    def largestSumOfAverages(self, A: List[int], K: int) -> float:
        if not A:
            return 0
        n = len(A)

        sumA = [0 for _ in range(n+1)]
        for i in range(n):
            sumA[i+1] = sumA[i] + A[i]

        if K <= 1:
            return 1.0 * sumA[n] / n
        
        if K >= n:
            return sumA[n]

        dp = [[0 for _ in range(K + 1)] for _ in range(n + 1)]
        # k = 1
        for i in range(1, n+1):
            dp[i][1] = (1.0 * sumA[i]) / i
        # k = 2...K
        for k in range(2, K+1):
            for i in range(k, n+1):
                j = i - 1
                while j >= k - 1:
                    dp[i][k] = max(dp[i][k], dp[j][k - 1] + 1.0 * (sumA[i] - sumA[j]) / (i - j))
                    j -= 1

        return dp[n][K]
#https://leetcode.com/problems/largest-sum-of-averages/