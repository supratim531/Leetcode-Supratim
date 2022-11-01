unordered_set<int> s;

int formula(int n) {
    int ans = 0;
    while (n)
        ans += pow(n % 10, 2), n /= 10;
    return ans;
}

class Solution {
public:
    bool isHappy(int n) {
        s.clear();
        s.insert(n);
        while (n != 1) {
            n = formula(n);
            if (s.find(n) != s.end()) return false;
            s.insert(n);
        }
        return true;
    }
};