class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        bool n_present = false;
        for (auto &ele : nums) {
            if (ele == n) {
                n_present = true;
                break;
            }
        }
        
        if (!n_present) return n;
        
        int ans = -1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; ++i) {
            if (nums[i] != i) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};