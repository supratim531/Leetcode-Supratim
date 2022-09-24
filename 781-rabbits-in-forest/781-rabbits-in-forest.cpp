const int N = 1e3 + 10;
int hsh[N];

class Solution {
public:
    int numRabbits(vector<int>& answers) {
        for (int i = 0; i < N; ++i) hsh[i] = 0;
        int ans = 0;
        for (auto &ele : answers)
            hsh[ele]++;
        ans += (hsh[0]);
        for (int i = 1; i < N; ++i) {
            if (hsh[i]) {
                int q = hsh[i] / (i + 1);
                int r = hsh[i] % (i + 1);
                if (r == 0) ans += (i * q + q);
                else ans += (q) ? (i * q + i + 1 + q) : (i + 1);
            }
        }
        return ans;
    }
};