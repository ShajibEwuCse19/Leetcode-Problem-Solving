class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0, fast = 0, n = nums.size();
        while (slow < n or fast < n) {
            //skip non-zero
            while (slow < n and nums[slow] != 0) {
                slow++;
            } 
            //skip zero
            fast = slow + 1;
            while(fast < n and nums[fast] == 0) {
                fast++;
            }

            if (slow < n and fast < n) {
                swap(nums[slow], nums[fast]);
            }
            slow++;
            fast++;
        }
    }
};

//TC: O(N) - loop and sub loop
//SC: O(1)

// 0 1 0 3 12 -> 1 0 0 3 12 -> 1 3 0 0 12 -> 1 3 12 0 0
// 1 1 1 0