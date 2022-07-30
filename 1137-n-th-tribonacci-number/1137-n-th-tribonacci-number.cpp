class Solution {
public:
    int tribonacci(int n) {
        long long dp[50] ; 
        
        dp[0] = 0 ; dp[1] = 1; dp[2] = 1 ;
        
        for(int i = 0 ; i<=n ;i++){
            dp[i+3] = dp[i] + dp[i+1] + dp[i+2] ;
        }
        return dp[n] ; 
    }
};