const int N = 200 + 10;
int hsh[N];

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (int i = 0; i < N; ++i)
            hsh[i] = 0;
        int least = *min_element(nums.begin(), nums.end());
        least *= (least < 0) ? -1 : 1;
        for (auto &ele : nums)
            hsh[ele + least]++;
        int ans = 0;
        vector<int> help;
        for (int i = 0; i < N; ++i)
            if (hsh[i])
                ans++, help.push_back(i - least);
        for (int i = 0; i < ans; ++i)
            nums[i] = help[i];
        return ans;
    }
};