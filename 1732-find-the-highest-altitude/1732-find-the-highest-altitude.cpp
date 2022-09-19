class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> ans(n + 1);
        ans[0] = 0;
        for (int i = 0; i < n; ++i)
            ans[i + 1] = gain[i] + ans[i];
        int hgst_alt = *max_element(ans.begin(), ans.end());
        return hgst_alt;
    }
};