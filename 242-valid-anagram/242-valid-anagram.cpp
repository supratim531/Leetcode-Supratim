int hsh1[26], hsh2[26];

class Solution {
public:
    bool isAnagram(string s, string t) {
        for (int i = 0; i < 26; ++i) hsh1[i] = hsh2[i] = 0;
        for (auto &ele : s) hsh1[ele - 'a']++;
        for (auto &ele : t) hsh2[ele - 'a']++;
        for (int i = 0; i < 26; ++i) if (hsh1[i] != hsh2[i]) return false;
        return true;
    }
};