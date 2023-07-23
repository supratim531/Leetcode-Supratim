//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

const int N = 1e3 + 10;
int dp[N];

class Solution{
  public:
    int max_price(vector<int> &price, int len) {
    	if (len == 0) {
    		return 0;
    	}
    	
    	if (dp[len] != -1) {
    	    return dp[len];
    	}
    
    	int ans = 0;
    
    	for (int i = 0; i < price.size(); ++i) {
    		if (len - (i + 1) >= 0) {
    			ans = max(ans, max_price(price, len - (i + 1)) + price[i]);
    		}
    	}
    
    	return dp[len] = ans;
    }

    int cutRod(int price[], int n) {
        vector<int> v;
        memset(dp, -1, sizeof(dp));

        for (int i = 0; i < n; ++i) {
            v.push_back(price[i]);
        }

        return max_price(v, n);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends