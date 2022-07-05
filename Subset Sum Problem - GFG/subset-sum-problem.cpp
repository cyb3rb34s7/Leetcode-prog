// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
     bool isSubsetSum(vector<int>arr, int sum){
         int N=arr.size() ;
        vector<vector<bool>>dp(N+1,vector<bool>(sum+1,false)) ;
        
        for(int j=0; j<sum+1 ;j++)
            dp[0][j]=false;
        
        for(int i=0; i<N+1 ;i++)
            dp[i][0] = true ;
            
        for(int i=1 ;i<N+1 ; i++){
            for(int j=1 ; j < sum+1 ; j++){
                if(arr[i-1]<=j)
                    dp[i][j] = dp[i-1][j-arr[i-1]] or dp[i-1][j] ; 
                else
                dp[i][j]  = dp[i-1][j] ;
            }
        }
        
        
       return dp[N][sum] ;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends