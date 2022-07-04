// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    
    bool check(int ind, int target, vector<int> &arr, vector<vector<int>>&dp){
        if(target==0) 
                return true; 
        if(ind<0 and target!=0) 
            return false;
        
        if(dp[ind][target]!=-1)
            return dp[ind][target] ;
        if(arr[ind]<=target)
            return dp[ind][target] = check(ind-1,target-arr[ind],arr,dp) || check(ind-1,target,arr,dp) ;
        else
            return dp[ind][target] = check(ind-1,target,arr,dp) ; 
    }
    bool isSubsetSum(vector<int>arr, int sum){
         int N=arr.size() ;
        vector<vector<int>>dp(N+1,vector<int>(sum+1,-1)) ;
        
        
       return check(arr.size()-1,sum,arr,dp) ;
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