map<int, int> mp;

bool number_found(int n) {
    return mp.find(n) != mp.end();
}

int number_sum(int n) {
    int sum = 0;
    while (n)
        sum += (pow(n % 10, 2)), n /= 10;
    return sum;
}

class Solution {
public:
    bool isHappy(int n) {
        mp.clear();
        while (n != 1) {
            mp[n] = 1;
            n = number_sum(n);
            if (number_found(n))
                return false;
        }
        return true;
    }
};