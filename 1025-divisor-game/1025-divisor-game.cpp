class Solution {
public:
    int dp[1001] ;
    bool func(int n){
        if(n==1)
            return false;
      if(dp[n]!=-1)
          return dp[n];
        for(int i=1;i<n;i++){
            
            if(n%i==0)
                if(func(n-i)==false)
                    return dp[n] = true;
                 
        }
        return dp[n] = false;
    }
    bool divisorGame(int n) {
        memset(dp,-1,sizeof(dp)) ; 
        return func(n) ;
    }
};