// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[501][501] ; 
    bool isPalindrome(string &s,int i,int j){
        while(i<=j){
             if(s[i++]!=s[j--])
            return false; 
        }
        return true ; 
       
    }
    int solve(string &s, int i,int j){
        
        if(i>=j)
            return 0;
        if(isPalindrome(s,i,j))
            return 0 ; 
        if(dp[i][j]!=-1)
            return dp[i][j] ;
        int mn=INT_MAX ;     
        for(int k=i ;k<j;k++){
            
            int temp = solve(s,i,k) + solve(s,k+1,j) +1 ;
            
            mn=min(mn,temp) ;
        }
        return dp[i][j]=mn ;
        
    }
    int palindromicPartition(string s)
    {   memset(dp,-1,sizeof(dp)) ; 
        return solve(s,0,s.size()-1) ; 
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends