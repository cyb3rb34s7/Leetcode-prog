class Solution {
public:
    int m,n ;
    int dp[201][201]  ;
    int go(int i,int j,vector<vector<int>> &grid){
        if(i==m-1 and j==n-1)
            return grid[m-1][n-1] ; 
        
        if(i<0 or j<0 or j>=n or i>=m){
            return 10004 ;
        }
        if(dp[i][j]!=-1)
            return dp[i][j] ;
        int ans = INT_MAX ; 
        
        ans = min(go(i,j+1,grid)+grid[i][j],go(i+1,j,grid)+grid[i][j]) ; 
        
       
    
        return dp[i][j] = ans ; 
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        m = grid.size() ;
        n = grid[0].size() ; 
        memset(dp,-1,sizeof(dp)) ;
        return go(0,0,grid) ; 
    }
};