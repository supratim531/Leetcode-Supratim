class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if (digits[n - 1] != 9) { digits[n - 1]++; return digits; }
        reverse(digits.begin(), digits.end());
        digits[0] = 0;
        for (int i = 1; i < n; ++i) {
            if (digits[i] == 9) digits[i] = 0;
            else {
                digits[i]++;
                break;
            }
        }
        if (digits[n - 1] == 0) digits.push_back(1);
        reverse(digits.begin(), digits.end());
        return digits;
    }
};