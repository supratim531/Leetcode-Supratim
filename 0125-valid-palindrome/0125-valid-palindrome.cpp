class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string s2 = "";
        for (auto &ele : s)
            if ((ele >= 97 && ele <= 122) || (ele >= 48 && ele <= 57))
                s2.push_back(ele);
        for (int i = 0; i < s2.size() / 2; ++i)
            if (s2[i] != s2[s2.size() - 1 - i])
                return false;
        return true;
    }
};