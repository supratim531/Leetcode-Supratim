const int N = 200 + 10;
int hsh[N][26] = {0};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < 26; ++j)
                hsh[i][j] = 0;

        for (int i = 0; i < strs.size(); ++i)
            for (int j = 0; j < strs[i].size(); ++j)
                hsh[j][strs[i][j] - 'a']++;

        int j = 0;
        for (int i = 0; i < strs[0].size(); ++i) {
            if (hsh[i][strs[0][i] - 'a'] == strs.size())
                ++j, ans.push_back(strs[0][i]);
            if (j == i) break;
        }

        return ans;
    }
};