class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        else {
            int n = nums.size();
            for (int i = 1; i < n; ++i)
                nums[i] += nums[i - 1];
            
            int lsum = 0, rsum = 0;
            for (int i = 0; i < n; ++i) {
                if (i == 0) {
                    lsum = 0, rsum = nums[n - 1] - nums[i];
                } else if (i == (n - 1)) {
                    lsum = nums[i - 1], rsum = 0;
                } else {
                    lsum = nums[i - 1], rsum = nums[n - 1] - nums[i];
                }
                if (lsum - rsum == 0) return i;
            }
            return -1;
        }
    }
};