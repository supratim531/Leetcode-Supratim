class Solution {
    public int minOperations(String[] logs) {
        int ans = 0;
        for (String log : logs) {
            if ((!log.equals("../")) && (!log.equals("./"))) {
                ans++;
            } else if (log.equals("../")) {
                ans = (ans <= 0) ? 0 : ans - 1;
            }
        }
        return ans;
    }
}