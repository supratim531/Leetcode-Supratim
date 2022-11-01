//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

unordered_map<string, int> m;

class Solution
{
    public:
        int countWords(string list[], int n) {
        	m.clear();
        	int count = 0;
        	for (int i = 0; i < n; ++i)
        		m[list[i]]++;
        	for (auto &ele : m)
        		(ele.second == 2) ? count += 1 : 1;
        	return count;
        }

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends