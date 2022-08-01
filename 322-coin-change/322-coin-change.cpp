class Solution {
public:
    int solve(int ind, vector<int> &coins,int w,vector<vector<int>> &dp){
        
        if(w==0)
            return 0 ;
        if(ind<0)
            return 1e8; 
        if(dp[ind][w]!=-1)
            return dp[ind][w] ;
        int notTake = solve(ind-1,coins,w,dp) ;
        
        int take = 1e8 ;
        
        if(coins[ind]<=w){
            take = 1 + solve(ind,coins,w -coins[ind],dp ) ;
        }
        
        return dp[ind][w] = min(take,notTake) ;    
        
    }
    int coinChange(vector<int>& coins, int w) {
        int n = coins.size() ;
        
        vector<vector<int>> dp(n+1,vector<int>(w+1,-1)) ;
        
        
        int ans = solve(n-1,coins,w,dp) ;
        
        if(ans==1e8)
            return -1 ;
        
        return ans ;
    }
};