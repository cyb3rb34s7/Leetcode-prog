class Solution {
public:
    int dp[105][105] ;
    int unique(int i,int j,int m ,int n){
        if(i==m-1 and j==n-1)
            return 1;
        if(dp[i][j]!=-1)
            return dp[i][j] ;
        if(i>m or j>n)
            return 0;
        
        return dp[i][j] = unique(i+1,j,m,n)+unique(i,j+1,m,n);
    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp)) ;
        int i = unique(0,0,m,n);
        return i;
    }
};