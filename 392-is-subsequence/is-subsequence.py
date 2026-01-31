class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        leftS = leftT = 0
        while leftS < len(s) and leftT < len(t):
            if s[leftS] == t[leftT]:
                leftS += 1
            leftT += 1
        
        return leftS == len(s)

#TC: O(max(len(s,t))) = O(n)
#SC: O(1) -> no extra space using
            