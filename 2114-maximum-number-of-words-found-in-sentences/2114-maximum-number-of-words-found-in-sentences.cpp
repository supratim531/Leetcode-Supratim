class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for (auto &ele : sentences) {
            int space_count = 1;
            for (int i = 0; i < ele.size(); ++i) {
                if (ele[i] == ' ') space_count++;
            }
            ans = max(ans, space_count);
        }
        return ans;
    }
};