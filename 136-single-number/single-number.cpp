class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>count;
        for(auto value: nums) {
            count[value]++;
        }

        for(auto idx: count) {
            if(idx.second == 1) return idx.first;
        }
        return 0;
    }
};

//TC: O(n + n) = O(n)
//SC: O(n) - map