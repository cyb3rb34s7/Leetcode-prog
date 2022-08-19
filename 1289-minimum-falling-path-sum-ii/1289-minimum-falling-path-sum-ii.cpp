class Solution {
public:
    int m,n ;
    int dp[205][207] ;
    int go(int idx,int prevCol,vector<vector<int>>& grid){
        if(idx>=m)
            return 0; 
        
        int ans =INT_MAX ;
        if(dp[idx][prevCol]!=-1)
            return dp[idx][prevCol] ;
        for(int j=0;j<n;j++){
            if(j==prevCol) continue;
            
            ans = min(ans,go(idx+1,j,grid) + grid[idx][j]) ;
        }
        return dp[idx][prevCol] = ans ;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        m = grid.size() ;
        n = grid[0].size() ;
        memset(dp,-1,sizeof(dp)) ;
        return go(0,206,grid) ;
    }
};