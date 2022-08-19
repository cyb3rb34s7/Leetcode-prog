class Solution {
public:
    int n;
    
    int mod = 1e9+7 ; 
   
    int go(int idx,string &s,vector<int> &dp){
        
        if(idx>=n)
            return 1;
        int ans = 0 ;
        if(dp[idx]!=-1)
            return dp[idx] ;
        int bound = (s[idx]-'0'==7 or s[idx]-'0'==9) ? 4 : 3 ;
        for(int i=1;i<=bound && idx+i<=n && s[idx]==s[idx+i-1];i++){

                ans=(ans+(go(idx+i,s,dp))%mod)%mod;
           
        }
        return dp[idx] = ans % mod ;
    }
    int countTexts(string s) {
        n = s.size() ;
        vector<int> dp(n+1,-1) ;

        return go(0,s,dp);
    }
};