class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(auto value : nums) ans = ans ^ value;
        return ans;
    }
};

//TC: O(n) - loop
//SC: O(1) - no space
// a xor a xor a = 0 xor a = a, a xor b xor a = a xor a xor b = 0 xor b = b
// 1 xor 1 = 0 
// 0 xor 0 = 0 
// 1 xor 0 = 1 
// 0 xor 1 = 1