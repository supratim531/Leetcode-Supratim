class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        string ans(n, ' ');

        int i = 0;
        for (auto &ele : indices)
            ans[ele] = s[i++];
        return ans;
    }
};