class Solution {
public:
    int solve(int n , vector<int> &dp){
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(dp[n]!=-1)
            return dp[n] ; 
        if( n % 2 == 0)
            return dp[n] = solve(n/2,dp) ; 
        else{
            return dp[n] = solve(n/2,dp) + 1 ;
        }
    }
    
    vector<int> countBits(int n) {
        vector<int> res(n+1) ; 
        
        vector<int> dp(n+1,-1) ;
        for(int i=0;i<=n;i++){
            res[i] = solve(i,dp) ; 
        }
        return res; 
    }
};