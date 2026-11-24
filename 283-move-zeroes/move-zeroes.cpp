class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0, fast = 0, n = nums.size();
        while (fast < n) {
            if (nums[fast] != 0) {
                swap(nums[slow], nums[fast]);
                slow++; // slow will forward if swap
            }
            fast++; // fast always move forward
        }
    }
};

// initial non-zero will swap with itself and move both pointer forward. 
// when zeros -> fast still move forward
// when non-zero -> swap + slow will go forward

//TC: O(N) - loop and sub loop
//SC: O(1)

// 0 1 0 3 12 -> 1 0 0 3 12 -> 1 3 0 0 12 -> 1 3 12 0 0
// 1 1 1 0
// 1 5 3 0 3 6