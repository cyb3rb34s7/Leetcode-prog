class Solution {
public:
    int minDistance(string a, string b) {
        int m=a.size(),n=b.size() ; 
        
        int dp[m+1][n+1] ; 
        memset(dp,0,sizeof(dp)) ;
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                
                if(a[i-1]==b[j-1])
                    dp[i][j] = 1+ dp[i-1][j-1] ;
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]) ;
            }
            
        }
        return m+n- (2*dp[m][n]) ;
    }
};