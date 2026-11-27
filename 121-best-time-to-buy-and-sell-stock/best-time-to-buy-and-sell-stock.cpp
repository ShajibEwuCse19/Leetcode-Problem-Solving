class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int slow = 0, fast = 1, profit = 0, n = prices.size();
        if (n == 1) return 0;

        while(fast < n and slow < n) {
            if (prices[fast] < prices[slow]) {
                slow = fast;
                fast++;
                continue;
            }
            
            profit = max(profit, prices[fast] - prices[slow]);
            fast++;
        }
        return profit;
    }
};

//TC: O(N)
//SC: O(1)