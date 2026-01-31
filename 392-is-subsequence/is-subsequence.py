class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        left = 0
        for i in range(0, len( s)):
            find = False
            for j in range(left, len(t)):
                if s[i] == t[j]:
                    find = True
                    left = j + 1 
                    break
            if find == False: return find
        return True
            