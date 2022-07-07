// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
      vector<int> level ; 
      for(int i=1 ;i<=n;i++)
      {
          level.push_back(i) ; 
      }
      
      int dp[n+1][n+1]  ;
      
        for(int i=0 ;i<n+1;i++)
            dp[i][0] = 0 ; 
        
        for(int j=0;j<n+1;j++)
            dp[0][j] =0 ; 
            
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(level[i-1]<=j)
                    dp[i][j] = max(price[i-1]+dp[i][j-level[i-1]],dp[i-1][j]) ; 
                else
                    dp[i][j] = dp[i-1][j] ; 
            }
            
        }
        return dp[n][n] ; 
    }
};

// { Driver Code Starts.

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
}  // } Driver Code Ends