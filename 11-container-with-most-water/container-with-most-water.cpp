class Solution {
public:
    int maxArea(vector<int>& v) {
        
        int l = 0, r = v.size()-1;
        int ans = 0;
        while(l <= r)
        {
            int height = min(v[l] , v[r]);
            int width = r - l;

            int area = (height*width);
            
            ans = max(ans,area);

            while(l<=r and v[l] <= height)l++;
            while(l<=r and v[r] <= height)r--;
        }

        return ans;
    }
};