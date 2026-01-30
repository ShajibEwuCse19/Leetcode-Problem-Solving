class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return sorted(s) == sorted(t)

#TC: O(sort algo) = O(Nlogn)
#SC: O(1)
        