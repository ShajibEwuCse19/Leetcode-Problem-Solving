class Solution {
    void twoSum(vector<int>& nums, int firstVal, int left, int right, int target, vector<vector<int>>& ans) {
        while (left < right) { // O(N)
            int sum = nums[left] + nums[right];
            if (sum > target)
                right--;
            else if (sum < target)
                left++;
            else {
                ans.push_back({firstVal, nums[left], nums[right]});
                left++;
                right--;
                //skip duplicate
                while (left < right and nums[left] == nums[left - 1]) left++;
                while (right > left and nums[right] == nums[right + 1]) right--;
            }
        }
    }

public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;                    // O(n)
        sort(nums.begin(), nums.end());             // O(NlogN)
        int n = nums.size();
        
        for (int i = 0; i < nums.size() - 2; i++) { // O(N)
            //skip duplicate
            if (i > 0 and nums[i] == nums[i - 1]) continue;

            int target = -nums[i]; // a + b + c = 0, b + c = - a (target)
            int left = i + 1, right = n - 1;
            twoSum(nums, nums[i], left, right, target, ans); // O(N)
        }
        return ans;
    }
};

// TC: O(N*N) = O(N^2)
// SC: O(n) <- ans vector