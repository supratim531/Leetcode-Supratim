const int N = 100 + 10;
int hsh[N];

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < N; ++i) hsh[i] = 0;
        for (int i = 0; i < n; ++i) hsh[nums[i]]++;
        
        int sum = 0;
        for (int i = 0; i < N; ++i)
            if (hsh[i] == 1) sum += i;
        return sum;
    }
};