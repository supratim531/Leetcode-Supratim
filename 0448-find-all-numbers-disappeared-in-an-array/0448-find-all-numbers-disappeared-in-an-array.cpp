// const int N = 1e5 + 10;
// int hsh[N];

// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int> ans;
//         for (int i = 0; i < N; ++i)
//             hsh[i] = 0;
//         for (int i = 0; i < nums.size(); ++i)
//             hsh[nums[i]]++;
//         for (int i = 1; i <= nums.size(); ++i)
//             if (hsh[i] == 0) ans.push_back(i);
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int lb, ub, n = nums.size();
        sort(nums.begin(), nums.end());
        if (nums[0] != 1) {
            lb = 1, ub = nums[0] - 1;
            for (int i = lb; i <= ub; ++i)
                ans.push_back(i);
        }
        for (int i = 0; i < n; ++i) {
            if (i != n - 1) {
                int diff = nums[i + 1] - nums[i];
                if (diff > 1) {
                    lb = nums[i] + 1, ub = nums[i + 1] - 1;
                    for (int j = lb; j <= ub; ++j)
                        ans.push_back(j);
                }
            } else {
                if (nums[i] == n)
                    break;
                else {
                    lb = nums[i] + 1, ub = n;
                    for (int j = lb; j <= ub; ++j)
                        ans.push_back(j);
                }
            }
        }
        return ans;
    }
};