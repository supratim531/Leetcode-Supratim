class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for (int i = 0; i < arr.size(); ++i)
            sum += arr[i];
        for (int i = 1; i < arr.size(); ++i)
            arr[i] += arr[i - 1];

        if (arr.size() >= 3) {
            int oct = 1, ect = 1, esum = 0, osum = 0, oind = 0, eind = 1;
            for (int i = 2; i < arr.size(); ++i) {
                if ((i + 1) & 1) {
                    sum += (arr[i] * oct++);
                    if ((i + 1) != 3) {
                        esum += arr[eind];
                        sum -= esum;
                        eind += 2;
                    }
                } else {
                    osum += arr[oind];
                    sum += ((arr[i] * ect++) - osum);
                    oind += 2;
                }
            }
        }

        return sum;
    }
};