class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        for i in range(1, len(nums)):
            if (nums[i] == nums[i-1]):
                return True
        return False

    #TC: O(len(nums)*sort) = O(n*log(n)) = O(nlogn)
    #SC: O(1) - no space usase
        