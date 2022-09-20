class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for (int i = left; i <= right; ++i) {
            int flag = 0;
            for (int j = 0; j < ranges.size(); ++j) {
                if (i > ranges[j][0] && i > ranges[j][1])
                    continue;
                if (i >= ranges[j][0] && i <= ranges[j][1]) {
                    flag = 1;
                }
            }
            if (flag == 0) return false;
        }
        return true;
    }
};