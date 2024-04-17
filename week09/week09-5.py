# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def smallestFromLeaf(self, root: Optional[TreeNode]) -> str:

        table = "abcdefghijklmnopqrstuvwxyz"#字母對照表
        def helper(root, nowStr):
            if root == None: return nowStr
            nextStr = table[root.val] + nowStr
            if root.left==None and root.right==None: return nextStr
            if root.left==None: return helper(root.right, nextStr)
            if root.right==None: return helper(root.left, nextStr)
            left = helper(root.left, nextStr)
            right = helper(root.right, nextStr)
            return min(left, right)

        #print("table[0] is", table[0])#只是先試試看
        #print("table[25] is" , table[25])
        return helper(root, '') #只是先試看看