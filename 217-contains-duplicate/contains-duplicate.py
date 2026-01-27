class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        freq = {}
        for x in nums:
            freq[x] = freq.get(x, 0) + 1 #if x exits, return value [freq], else return 0. always +1 to increase freq. 

            if freq[x] > 1: 
                return True

        return False

    #TC: O(len(nums)) = O(n)
    #SC: user freq, so, O(size of freq) = O(n)
        