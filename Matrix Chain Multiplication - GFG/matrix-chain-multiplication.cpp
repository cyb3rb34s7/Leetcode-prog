// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int solve(vector<int> &arr,int i ,int j,vector<vector<int>> &dp){
        if(i>=j)
            return 0;
        int minima = INT_MAX  ; 
        if(dp[i][j]!=-1)
            return dp[i][j] ; 
        for(int k=i;k<j;k++){
            dp[i][k] = solve(arr,i,k,dp) ;
            dp[k+1][j] = solve(arr,k+1,j,dp)  ; 
            int temp = dp[i][k] +dp[k+1][j]  + (arr[i-1]*arr[k]*arr[j]) ;
            
            minima = min(minima,temp); 
        }
        return minima;
    }
    int matrixMultiplication(int N, int arr[])
    {
        vector<int > ar (arr,arr+N) ;
        vector<vector<int>> dp(N+1,vector<int>(N+1,-1)) ; 
        return solve(ar,1,N-1,dp) ; 
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends