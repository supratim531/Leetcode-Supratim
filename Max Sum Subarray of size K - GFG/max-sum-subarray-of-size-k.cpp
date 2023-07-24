//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maxSum(vector<int> &a, int k, int n) {
        long long i = 0, j = i, sum = 0, ans = INT64_MIN;
    
        while(j < n) {
            sum += a[j];
    
            if (j - i + 1 == k) {
                ans = max(ans, sum);
            } else if (j - i + 1 > k) {
                sum -= a[i];
                i++;
                sum -= a[j];
                j--;
            }
    
            j++;
        }
    
        return long(ans);
    }

    long maximumSumSubarray(int K, vector<int> &Arr , int N) {
        return maxSum(Arr, K, N);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends