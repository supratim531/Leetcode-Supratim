class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for (auto &ele : nums)
            mp[ele]++;
        for (int i = 0; i < nums.size(); ++i) {
            map<int, int>::iterator it = mp.find(nums[i]);
            if (it != mp.end())
                if (it->second > 1)
                    return true;
        }
        return false;
    }
};