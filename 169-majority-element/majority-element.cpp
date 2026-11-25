class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> cnt;
        int maxCnt = -1, ans = -1;
        for (auto x: nums) {
            cnt[x]++;
            if (cnt[x] > maxCnt) {
                maxCnt = max(maxCnt, cnt[x]);
                ans = x;
            }
        }

        return ans;
    }
};

//TC: O(N)
//SC: O(N)