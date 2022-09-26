class Solution {
    public int[] plusOne(int[] d) {
        int n = d.length;
        if (d[n - 1] != 9) { d[n - 1] += 1; return d; }
        for (int i = n - 1; i >= 0; --i) {
            if (d[i] == 9) {
                d[i] = 0;
            } else {
                d[i] += 1;
                return d;
            }
        }
        int[] extra = new int[n + 1];
        extra[0] = 1;
        for (int i = 0; i < d.length; ++i) extra[i + 1] = d[i];
        return extra;
    }
}