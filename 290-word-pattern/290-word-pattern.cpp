int hsh[26];
map<string, char> mp;

bool present(string &p) {
    return mp.find(p) != mp.end();
}

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int i = 0;
        mp.clear();
        int space = 0;
        for (auto &ele : s) if (ele == ' ') space++;
        if (pattern.size() - 1 != space) return false;
        string proxy = "";
        for (int c = 0; c < 26; c++) hsh[c] = 0;
        for (int c = 0; c <= s.size(); c++) {
            char ele = s[c];
            if (ele == ' ' || ele == '\0') {
                if (present(proxy)) {
                    if (mp[proxy] == pattern[i]);
                    else return false;
                } else {
                    if (hsh[pattern[i] - 'a']) return false;
                    mp.insert({proxy, pattern[i]});
                }
                hsh[pattern[i] - 'a']++;
                proxy = "";
                ++i;
            }
            else proxy.push_back(ele);
        }
        return true;
    }
};