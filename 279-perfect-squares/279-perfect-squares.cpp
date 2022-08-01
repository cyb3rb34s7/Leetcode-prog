class Solution {
public:
    
    int solve(int ind,int w ,vector<int> &res,vector<vector<int>> &dp){
        
        if(w==0)
            return 0 ;
        if(ind<0 and w!=0){
            return 1e6 ;
        }
        if(dp[ind][w]!=-1)
            return dp[ind][w] ;
        int notTake = solve(ind-1,w,res,dp) ;
        int take = 1e6 ;
        if(res[ind]<=w){
             take = 1 + solve(ind,w-res[ind],res,dp) ;
        }
        return dp[ind][w] = min(take,notTake) ;
    }
    int numSquares(int n) {
        vector<int> res ;
        
        for(int i=1 ;i*i<=n ;i++)
        {
            res.push_back(i*i) ;
        }
        
        int N = res.size() , W = n ;
        vector<vector<int>> dp(N+1,vector<int>(W+1,-1)) ;
        return solve(N-1,W,res,dp) ;
    }
};