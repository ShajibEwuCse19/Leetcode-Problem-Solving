class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 0) {
            nums1 = nums2;
            return;
        }

        int tail = m + n - 1;
        n--;
        m--;
        while(n >= 0) {
            if (m >= 0 and nums1[m] >= nums2[n]) {
                nums1[tail] = nums1[m];
                m--;
            }
            else {
                nums1[tail] = nums2[n];
                n--;
            }
            
            tail--;
        }
    }
};