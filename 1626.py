class Solution:
    def bestTeamScore(self, scores: List[int], ages: List[int]) -> int:
        sc = sorted([[b, a] for a, b in zip(scores, ages)])
        # longest increasing subarray
        dp = [c[1] for c in sc]
        for i in range(1, len(scores)):
            for j in range(i):
                if sc[i][1]>=sc[j][1]:
                    dp[i] = max(dp[i], dp[j]+sc[i][1])
        return max(dp)
#https://leetcode.com/problems/best-team-with-no-conflicts/