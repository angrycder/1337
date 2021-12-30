from typing import *
def kadanes(a,size):
        h=-float("infinity")
        l=0
        for i in range(size):
            l+=a[i]
            h=max(h,l)
            l=max(h,0)
        return h

def lcs(s1,s2,n,m):
    if m==0 or n==0:
        return ""
    if s1[n-1]==s2[m-1]:
        return lcs(s1,s2,n-1,m-1)+s2[m-1]
    return max(lcs(s1,s2,n,m-1),lcs(s1,s2,n-1,m),key=len)

def shortestCommonSupersequence(self, str1: str, str2: str) -> str:
        n1, n2 = len(str1), len(str2)
        dp = [[""] * (n2 + 1) for _ in range(n1 + 1)]
        for i in range(1, n1 + 1):
            for j in range(1, n2 + 1):
                if str1[i - 1] == str2[j - 1]:
                    dp[i][j] = dp[i - 1][j - 1] + str1[i - 1]
                else:
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1], key=len)
        lcs = dp[n1][n2]
        res = ""
        i, j = 0, 0
        for c in lcs:
            while str1[i] != c:
                res += str1[i]
                i += 1
            while str2[j] != c:
                res += str2[j]
                j += 1
            res += c
            i+=1
            j+=1
        res = res + str1[i:] + str2[j:]
        return res

from bisect import bisect_left
 
def lengthOfLIS(nums):
    dp = []
    vals=[]
    for n in nums:
        j = bisect_left(dp, n)
        if j < len(dp): dp[j] = n
        else: dp.append(n)
        vals.append(j)
    return len(dp) 

def editDistance(str1, str2, m, n):
    if m == 0:
        return n
    if n == 0:
        return m
 
    if str1[m-1] == str2[n-1]:
        return editDistance(str1, str2, m-1, n-1)

    return 1 + min(editDistance(str1, str2, m, n-1),    # Insert
                   editDistance(str1, str2, m-1, n),    # Remove
                   editDistance(str1, str2, m-1, n-1)    # Replace
                   )

def isSubsetSum(st, n, s):
 
    # Base Cases
    if (s == 0):
        return True
    if (n == 0):
        return False
 
    # If last element is greater than
    # sum, then ignore it
    if (st[n - 1] > sum):
        return isSubsetSum(st, n - 1, s)
 
    # else, check if sum can be obtained
    # by any of the following
    # (a) including the last element
    # (b) excluding the last element
    return isSubsetSum(st, n-1, s) or isSubsetSum(st, n-1, s-st[n-1])

def findMinRec(arr, i, sumCalculated,sumTotal):
 
    # If we have reached last element. 
    # Sum of one subset is sumCalculated,
    # sum of other subset is sumTotal-
    # sumCalculated.  Return absolute
    # difference of two sums.
    if (i == 0):
        return abs((sumTotal - sumCalculated)-sumCalculated)
 
    # For every item arr[i], we have two choices
    # (1) We do not include it first set
    # (2) We include it in first set
    # We return minimum of two choices
    return min(findMinRec(arr, i - 1,
                          sumCalculated+arr[i - 1],
                          sumTotal),
               findMinRec(arr, i - 1,
                          sumCalculated, sumTotal))

def trap(self, height) -> int:
            n=len(height)
            if n<3: return 0
            # finding max height from right to that position
            rmax=[0 for _ in range(n)]
            rmax[-1]=height[-1]
            for i in range(n-2,-1,-1):
                rmax[i]=max(rmax[i+1],height[i])
            
            lmax=0 
            res=0
            for i in range(n):
                lmax=max(height[i],lmax)            # maximum form left-side to that position
                # amount of  water trap at specific location is how much it is empty from both sides
                res+=min(rmax[i],lmax)-height[i]
            
            return res

def count(s, n): 
    dp = [0 for i in range(n+1)]
    dp[0]=1
    for c in s:
        for x in range(c,n+1):
            dp[x]+=dp[x-c]
    return dp[n]

def isPalindrome(x):
    return x == x[::-1]


def minPalPartion(string, i, j):
    if i >= j or isPalindrome(string[i:j + 1]):
        return 0
    ans = float('inf')
    for k in range(i, j):
        count = (
            1 + minPalPartion(string, i, k)
            + minPalPartion(string, k + 1, j)
        )
        ans = min(ans, count)
    return ans

# Function to find out maximum profit
# by buying & selling/ a share atmost
# k times given stock price of n days
def maxProfit(price, n, k):
 
    # Table to store results of subproblems
    # profit[t][i] stores maximum profit
    # using atmost t transactions up to
    # day i (including day i)
    profit = [[0 for i in range(n + 1)]
                 for j in range(k + 1)]
 
    # Fill the table in bottom-up fashion
    for i in range(1, k + 1):
        prevDiff = float('-inf')
         
        for j in range(1, n):
            prevDiff = max(prevDiff,
                           profit[i - 1][j - 1] -
                           price[j - 1])
            profit[i][j] = max(profit[i][j - 1],
                               price[j] + prevDiff)
 
    return profit[k][n - 1]

def longestValidParentheses(self, s: str) -> int:
        m = 0
        stack =[]
        stack.append(-1)
        for  i  in range(len(s)):
            if s[i]=="(":
                stack.append(i)
            else:
                stack.pop()
                if not stack:
                    stack.append(i)
                else:
                    m=max(m,i-stack[-1])
        return m

def threeSum(self, nums: List[int]) -> List[List[int]]:
        n = len(nums)
        nums = sorted(nums)
        ret = set()
        if n == 0:
            return []
        for i in range(n-2):
            l=i+1
            r = n-1
            while l < r:
                if nums[i]+nums[l]+nums[r] > 0:
                    r=r-1
                elif  nums[i]+nums[l]+nums[r] < 0:
                    l=l+1
                else:
                    ret.add((nums[i],nums[l],nums[r]))
                    l =l+1
                    r =r-1
        ret = list(map(list,list(ret)))
        return ret
def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        output=set()
        nums.sort()
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                l = j+1
                r = len(nums) - 1
                while l < r:
                    s_quadlet=(nums[i], nums[j], nums[l], nums[r])
                    if sum(s_quadlet) == target and s_quadlet not in output:
                        output.add(s_quadlet)
                    elif sum(s_quadlet) > target:
                        r-=1
                    else:
                        l+=1
        return output