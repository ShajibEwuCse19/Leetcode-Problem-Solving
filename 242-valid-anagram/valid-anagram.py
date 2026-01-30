class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): return False #base case
        cnt = {}
        for x in s: cnt[x] = cnt.get(x, 0) + 1 #increment 1 with cnt[x]. if cnt[x] is not assign, assign with 0 and +1, else cnt[x] + 1 = old value + 1.

        for x in t:
            if x not in cnt or cnt.get(x) == 0: return False
            cnt[x] -= 1

        return True

#TC: O(len(str)) = O(n)
#SC: O(len(cnt)) = O(n)
        