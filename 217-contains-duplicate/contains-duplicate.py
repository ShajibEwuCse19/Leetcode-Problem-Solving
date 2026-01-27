class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        freq = {}
        for x in nums:
            if x in freq:
                freq[x] = freq[x] + 1 #increment
            else:
                freq[x] = 1 #initialization

            if freq[x] > 1: 
                return True

        return False

    #TC: O(len(nums)) = O(n)
    #SC: user freq, so, O(size of freq) = O(n)
        