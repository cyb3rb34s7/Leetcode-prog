class Solution {
public:
    string shortestCommonSupersequence(string a, string b) {
        int m=a.size() ,n=b.size() ;
        int dp[m+1][n+1] ; 
        memset(dp,0,sizeof(dp)) ; 
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(a[i-1]==b[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1] ; 
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]) ; 
            }
        }
        
        int i = m , j = n ;
        string s="" ; 
        
        while(i>0 and j>0){
            if(a[i-1]==b[j-1]){
                s.push_back(a[i-1]) ;
                i--;
                j-- ;
            }
            else
            {
                if(dp[i-1][j]>dp[i][j-1])
                {
                    s.push_back(a[i-1]) ;
                    i-- ; 
                }
                else
                {
                    s.push_back(b[j-1]);
                    j-- ;
                }
            }
        }
        while(i>0){
            s.push_back(a[i-1]) ; i-- ; 
            
        }
        while(j>0){
            s.push_back(b[j-1]) ; j-- ;
        }
        reverse(s.begin(),s.end()) ; 
        return s ; 
    }
};