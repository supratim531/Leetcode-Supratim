class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        bool no_space = false;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] != ' ')
                no_space = true;
            if (no_space) {
                if (s[i] == ' ') break;
                else ans++;
            }
        }
        return ans;
    }
};