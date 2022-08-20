class Solution {
public:
    #define mod 1000000007
    int dp[20] ;
    int go(int n){
        
        if(n==1 or n==0)
            return 1 ;
        if(n==2)
            return 2;
        int res= 0 ;
        if(dp[n]!=-1)
            return dp[n];
        for(int i=1;i<=n;i++){
            
            res+= ((go(i-1)) * (go(n-i))) ;
        }
        return dp[n] = res ;
        
    }
    int numTrees(int n) {
          memset(dp,-1,sizeof(dp)) ;
        
        return go(n)  ;
    }
};