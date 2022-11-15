map<int, pair<int, int>> m;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        m.clear();
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; ++i)
            m[nums[i]] = {i, 1};
        for (int i = 0; i < nums.size(); ++i) {
            int rem = target - nums[i];
            if (m.find(rem) != m.end()) {
                if (m[rem].first != i) {
                    ans.push_back(i), ans.push_back(m[rem].first);
                    break;
                }
            }
        }
        return ans;
    }
};