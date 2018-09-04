# Definition for binary tree with next pointer.
# class TreeLinkNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
#         self.next = None

class Solution:
    # @param root, a tree link node
    # @return nothing
    def connect(self, root):
        self.hashmap={}
        depth=0
        self.dfs(root,depth)
    def dfs(self,root,depth):
        if not root:
            return
        if depth in self.hashmap:
            pre=self.hashmap[depth]
            self.hashmap[depth]=root
            pre.next=self.hashmap[depth]
        else:
            self.hashmap[depth]=root
        self.dfs(root.left,depth+1)
        self.dfs(root.right,depth+1)
        return