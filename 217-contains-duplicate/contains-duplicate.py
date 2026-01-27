class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()
        for x in nums:
            seen.add(x)

        return len(seen) != len(nums)

    #TC: O(len(nums)) = O(n)
    #SC: O(all unique) = O(len(seen)) = O(n)
        