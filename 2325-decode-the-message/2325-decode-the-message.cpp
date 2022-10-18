int hsh[26];

class Solution {
public:
    string decodeMessage(string key, string message) {
        for (int i = 0; i < 26; ++i) hsh[i] = -1;
        int i = 0;
        string ans;
        for (auto &ele : key) {
            if (ele != ' ')
                if (hsh[ele - 'a'] == -1)
                    hsh[ele - 'a'] = i++;
        }
        for (auto &ele : message) {
            if (ele != ' ')
                ans.push_back(97 + hsh[ele - 'a']);
            else
                ans.push_back(' ');
        }
        return ans;
    }
};