class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.strip().split()

        return 0 if not s else len(s[-1])

#TC: O(len s) = O(n)
#SC: no space = O(1)
        