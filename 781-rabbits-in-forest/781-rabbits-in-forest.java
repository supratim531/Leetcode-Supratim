class Solution {
    public static int formula(int n, int count) {
        int tempAns = 0;
        int q = count / (n + 1);
        int r = count % (n + 1);
        tempAns = tempAns + (q * (n + 1));
        if (r > 0) tempAns += (n + 1);
        return tempAns;
    }

    public int numRabbits(int[] a) {
        int N = 1000 + 10;
        int[] hsh = new int[N];
        for (int ele : a)
            hsh[ele]++;
        int ans = 0;
        ans += hsh[0];
        for (int i = 1; i < hsh.length; ++i) {
            if (hsh[i] != 0)
                ans += formula(i, hsh[i]);
        }
        return ans;
    }
}