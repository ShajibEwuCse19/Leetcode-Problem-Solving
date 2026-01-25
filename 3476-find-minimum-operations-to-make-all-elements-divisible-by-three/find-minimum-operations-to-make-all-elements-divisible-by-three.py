class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        op = 0
        #op += sum(1 for i in nums if i % 3 != 0) // always 1 or 2 after %, so I took 1 (min)

        op += sum(min(x % 3, 3 - x % 3) for x in nums) #find the min manually

        return op
        