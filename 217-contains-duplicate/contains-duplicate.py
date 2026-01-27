class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()
        for x in nums:
            if x in seen:
                return True
            seen.add(x)

        return False

    #TC: O(len(nums)) = O(n)
    #SC: O(all unique) = O(len(seen)) = O(n)
        