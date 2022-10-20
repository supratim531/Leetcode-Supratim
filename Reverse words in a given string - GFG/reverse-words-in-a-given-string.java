//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            String s = sc.next();
            Solution obj = new Solution();
            System.out.println(obj.reverseWords(s));
            t--;
        }
    }
}

// } Driver Code Ends



class Solution 
{
    //Function to reverse words in a given string.
    String reverseWords(String S)
    {
        // code here
        String build = "";
        List<String> help = new ArrayList<>();
        for (int i = 0; i < S.length(); ++i) {
            char ch = S.charAt(i);
            if (ch == '.') {
                help.add(build);
                build = "";
            } else {
                build += ch;
            }
        }
        help.add(build);
        Collections.reverse(help);
        String ans = "";
        for (String str : help)
            ans += (str + ".");
        // System.out.println("DEBUG: " + ans);
        StringBuilder ansClone = new StringBuilder(ans);
        ansClone.deleteCharAt(ans.length() - 1);
        return ansClone.toString();
    }
}
