class Solution {
public:
    int dp[46] ; 
    int func(int n){
        if(n<=2)
            return n ;
        if(dp[n]!=-1) return dp[n] ;
        
        dp[n-1] =func(n-1) ;
        dp[n-2] = func(n-2) ; 
        return dp[n-1]+dp[n-2] ; 
    }
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        
        return func(n) ; 
    }
};