class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int64_t r, n = x, sum = 0;
        while (n)
            r = n % 10, n /= 10, sum = sum * 10 + r;
        return (sum == x) ? true : false;
    }
};