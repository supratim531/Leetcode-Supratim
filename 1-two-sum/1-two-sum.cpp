class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> mp;
        int n = nums.size();

        for (int i = 0; i < n; ++i)
            mp.insert({nums[i], i}); // -> O(n * log2(n)) < O(n^2)

        for (int i = 0; i < n; ++i) {
            int rem = target - nums[i];
            map<int, int>::iterator it = mp.find(rem); // -> O(log2(n))
            if (it != mp.end() && it->second != i) {
                ans.push_back(i), ans.push_back(it->second);
                break;
            }
        } // -> O(n * log2(n)) < O(n^2)

        return ans;
    }
};