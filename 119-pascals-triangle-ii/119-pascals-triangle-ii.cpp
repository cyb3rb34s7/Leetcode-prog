class Solution {
public:
    vector<int> getRow(int n) {
        if(n==0)
            return {1} ;
        if(n==1)
            return {1,1} ; 
        
        int dp[n+1][n+1] ; 
        memset(dp,0,sizeof(dp)) ;
        dp[1][1]=1;
        for(int i=0;i<n+1;i++)
            dp[i][0]=1 ; 
        
        for(int i=2;i<n+1;i++){
            dp[i][i]=1 ; 
            for(int j=1;j<i;j++){
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j] ; 
                
            }
         
        }
        vector<int>ans ;
        
        for(int j=0;j<n+1;j++){
            ans.push_back(dp[n][j]) ; 
        }
        return ans; 
        
        
        
    }
};