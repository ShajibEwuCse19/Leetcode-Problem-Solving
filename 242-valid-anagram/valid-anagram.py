class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        count = [0] * 26

        for char in s:
            count[ord(char) - ord('a')] += 1
        
        for char in t:
            if count[ord(char) - ord('a')] == 0:
                return False
            count[ord(char) - ord('a')] -= 1

        return True

#TC: O(len(str)) = O(n) #alphabet size fixed
#SC: O(len(cnt)) = O(26 - max char) = O(1)
        