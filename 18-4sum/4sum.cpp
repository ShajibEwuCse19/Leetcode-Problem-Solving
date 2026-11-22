class Solution {
    void applyTwoSum(vector<int>& nums, long long newTarget, int left, int right, vector<vector<int>>& quadruplets, int firstVal, int ScndVal) {
        // apply two sum to find new target [c + d = target - (a + b)]
        while (left < right) {
            long long sum = nums[left] + nums[right];
            if (sum > newTarget) right--;
            else if (sum < newTarget) left++;
            else {
                quadruplets.push_back({firstVal, ScndVal, nums[left], nums[right]});
                left++;
                right--;
                //skip duplicate
                while (left < right and nums[left] == nums[left - 1]) left++;
                while (right > left and nums[right] == nums[right + 1]) right--;
            }
        }
    }
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>quadruplets; // a + b + c + d = target 
        int len = nums.size();
        if (len <= 2) return {};
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                long long firstTwoSum = nums[i] + nums[j]; // a + b
                long long nextTwoSum = (long long)target - firstTwoSum; // c + d = target - a - b
                applyTwoSum(nums, nextTwoSum, j + 1, len - 1, quadruplets, nums[i], nums[j]); 

                //skip duplicate
                while (j + 1 < len and nums[j] == nums[j + 1]) j++;
            }
            //skip duplicate
            while (i + 1 < len and nums[i] == nums[i + 1]) i++;
        }
        return quadruplets;
    }
};

//TC: O(nlog + (n*n*n)) = O(n^3)
//SC: O(n) <- result vector only