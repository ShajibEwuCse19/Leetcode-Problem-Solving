class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> index;
        for (int idx = 0; idx < nums.size(); idx++) {
            int complement = target - nums[idx];

            if(index.count(complement)) {
                return {idx, index[complement]};
            }

            index[nums[idx]] = idx;
        }
        return {};
    }
};

// TC: O(N)
// SC: O(N) - map