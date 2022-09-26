const int N = 100 + 10;
int hsh[N];

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i = 0; i < N; ++i)
            hsh[i] = 0;
        int ans = 0, n = nums.size();
        for (int i = 0; i < n; ++i)
            if (nums[i] != val)
                hsh[nums[i]]++;
        for (int i = 0; i < n; ++i)
            if (hsh[nums[i]])
                ans++;
        int k = 0;
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < hsh[i]; ++j)
                nums[k++] = i;
        return ans;
    }
};