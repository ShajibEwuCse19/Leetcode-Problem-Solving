class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return Counter(s) == Counter(t)

#TC: O(len(str)) = O(n) #alphabet size fixed
#SC: O(len(cnt)) = O(1)
        