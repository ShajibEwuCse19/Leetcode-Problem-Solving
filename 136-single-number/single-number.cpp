class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() <= 2) return nums[0]; // TC: O(2)
        sort(nums.begin(), nums.end()); // TC: O(nlog(n))
        for(int i=0; i<nums.size(); i+=2) { // TC: O(n)
            if(nums[i] != nums[i+1]) return nums[i];
        }
        return nums[nums.size() - 1];
    }
};

//TC: O(2 + nlog(n) + n) = O(nlogn)
//SC: no extra space - O(1)