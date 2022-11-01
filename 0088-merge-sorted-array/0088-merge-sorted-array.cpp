class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int N = m + n;
        
        vector<int> extra;
        for (int i = 0; i < m; ++i)
            extra.push_back(nums1[i]);
        extra.push_back(INT32_MAX);
        nums2.push_back(INT32_MAX);
        
        
        int l_i = 0, r_i = 0;
        for (int i = 0; i < N; ++i) {
            if (extra[l_i] <= nums2[r_i])
                nums1[i] = extra[l_i++];
            else
                nums1[i] = nums2[r_i++];
        }
    }
};