class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, cand = nums[0];
        for (auto x: nums) { 
            if (freq == 0) cand = x;
            if (x == cand) freq++;
            if (x != cand) freq--;
        }
        return cand;
    }
};

//TC: O(N)
//SC: O(N)

//Boyer–Moore Majority Voting Algorithm: Return x which freq is more than (N/2)
//candidate(cand), frequency(freq):
//freq == 0: update candidate
//cand == x: freq++
//cnad != x: freq--
//final candidate(ans) must be who has highest frequencies.  