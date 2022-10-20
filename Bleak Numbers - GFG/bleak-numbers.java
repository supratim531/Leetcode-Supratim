//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            int n = Integer.parseInt(br.readLine().trim());
            Solution ob = new Solution();
            int ans = ob.is_bleak(n);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution
{
    public static int setBitCount(int c) {
        // find set bit count of i
		int count = 0;
		for (int i = 1; i <= 16; ++i) {
			int result = c & 1;
			if (result != 0)
				count++;
			c = c >> 1;
		}
		return count;
    }

    public int is_bleak(int n)
    {
        // Code here
        for (int i = 1; i < n; ++i) {
	        if (setBitCount(i) + i == n)
	            return 0;
	    }
	    return 1;
    }
}