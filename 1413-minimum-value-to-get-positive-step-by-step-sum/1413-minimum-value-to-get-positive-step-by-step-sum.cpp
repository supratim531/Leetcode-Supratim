class Solution {
public:
    int minStartValue(vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i)
            nums[i] += nums[i - 1];
        int least = *min_element(nums.begin(), nums.end());
        return (least <= 0) ? 1 - least : 1;
    }
};