class Solution {
public:
    int dp[10005];
    int go(int idx,vector<int>&res,int n){
        int ans = INT_MAX;
        if(idx==n)
            return 0 ;
        if(dp[idx]!=-1)
            return dp[idx] ;
        for(int i=0;i<res.size();i++){
            if(res[i]+idx<=n){
                ans = min(ans,go(idx+res[i],res,n)+1) ;
            }
        }
        return dp[idx]= ans ;
    }
    int numSquares(int n) {
        
        vector<int>res ;
        memset(dp,-1,sizeof(dp)) ;
        for(int i=1;i*i <= n ;i++){
            res.push_back(i*i) ;
        }
        
        return go(0,res,n) ; 
        
    }
};