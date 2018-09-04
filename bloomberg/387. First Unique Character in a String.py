class Solution:
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        hash_map={}
        for c in s:
            if c not in hash_map:
                hash_map[c]=1
            else:
                hash_map[c]+=1
        for i,c in enumerate(s):
            if hash_map[c]==1:
                return i
        return -1
            