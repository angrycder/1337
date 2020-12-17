# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def longestZigZag(self, root: TreeNode) -> int:
        self.ret = -float("infinity")
        def z(node,dirc):
            if not node:
                return 0
            l = z(node.left,"r")
            r = z(node.right,"l")
            self.ret = max(self.ret,l,r)
            return l+1 if dirc=="l" else r+1
        z(root,"r")
        z(root,"l")
        return self.ret
#https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/