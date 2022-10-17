class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans = 0;
        for (auto &ele : logs) {
            if (ele != "./" && ele != "../")
                ans++;
            else if (ele == "../")
                ans = (ans <= 0) ? 0 : ans - 1;
        }
        return ans;
    }
};