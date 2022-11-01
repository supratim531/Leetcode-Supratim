const int N = 1e5 + 10;
int hsh[N];

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < N; ++i)
            hsh[i] = 0;
        for (int i = 0; i < nums.size(); ++i)
            hsh[nums[i]]++;
        for (int i = 1; i <= nums.size(); ++i)
            if (hsh[i] == 0) ans.push_back(i);
        return ans;
    }
};