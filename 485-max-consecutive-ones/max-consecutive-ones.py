class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        result = 0
        cnt = 0
        for i in range(len(nums)):
            if nums[i] == 1: cnt += 1
            else: 
                result = max(cnt, result)
                cnt = 0

        return max(cnt, result)

#TC: O(len nums) = O(n)
#SC: O(1) 
        