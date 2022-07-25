class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size() ;
        int dp[n+1][n+1] ;
        memset(dp,0,sizeof(dp)) ; 
        string k = s ;
        reverse(k.begin(),k.end()) ; 
        
       int length = 0 ; 
        string ans ; 
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                
                if(s[i-1]==k[j-1])
                    {dp[i][j] = 1 + dp[i-1][j-1];
                     if(dp[i][j]>length){
                         string temp =  s.substr(i-dp[i][j],dp[i][j]);
                         string temp2 = temp ; 
                         reverse(temp2.begin(),temp2.end()) ; 
                         
                         if(temp==temp2){
                             length = dp[i][j] ; 
                             ans = temp ; 
                         }
                     }
                    }
                else
                    dp[i][j] = 0 ;
            }
        }
       
       
        return ans ; 
        
    }
};