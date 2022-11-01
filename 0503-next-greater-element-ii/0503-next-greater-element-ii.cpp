class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> NGE(n);
        stack<int> st;

        int peak = -1;
        for (int i = 0; i < n; ++i) {
            if (!st.empty()) peak = st.top();
            while (!st.empty() and nums[i] > nums[peak]) {
                NGE[peak] = nums[i], st.pop();
                if (!st.empty()) peak = st.top();
            }
            st.push(i);
        }
        
        for (int i = 0; i < n; ++i) {
            if (st.empty()) break;
            peak = st.top();
            while (nums[i] > nums[peak]) {
                NGE[peak] = nums[i], st.pop();
                peak = st.top();
            }
        }
        
        while (!st.empty())
            NGE[st.top()] = -1, st.pop();
        
        return NGE;
    }
};