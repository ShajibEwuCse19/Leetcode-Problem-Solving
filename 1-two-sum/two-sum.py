class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        storeHalfSum = {}
        for i in range(len(nums)):
            halfSum = target - nums[i]

            if halfSum in storeHalfSum:
                return [i, storeHalfSum[halfSum]]
            storeHalfSum[nums[i]] = i

#TC: O(n)
#SC: O(n)
        