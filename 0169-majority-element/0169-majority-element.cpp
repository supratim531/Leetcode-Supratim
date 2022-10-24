class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans, count = 1, n = nums.size();

        if (n == 1 || n == 2) return nums[0];

        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i] == nums[i + 1]) {
                count++;
                ans = nums[i];
            } else {
                count = 1;
            }

            if (count > n / 2)
                break;
        }
        return ans;
    }
};