const int N = 1e4 + 10;
int hsh[N];

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& main_nums, vector<int>& nums) {
        for (int i = 0; i < N; ++i) hsh[i] = 0;
        int n = nums.size();
        vector<int> NGE(n);
        stack<int> st;
        
        int peak = -1;
        for (int i = 0; i < n; ++i) {
            if (!st.empty()) peak = st.top();
            while (!st.empty() and nums[i] > nums[peak]) {
                hsh[nums[peak]] = NGE[peak] = nums[i], st.pop();
                if (!st.empty()) peak = st.top();
            }
            st.push(i);
        }
        
        while (!st.empty())
            hsh[nums[st.top()]] = NGE[st.top()] = -1, st.pop();
        
        for (int i = 0; i < main_nums.size(); ++i)
            main_nums[i] = hsh[main_nums[i]];
        
        return main_nums;
    }
};