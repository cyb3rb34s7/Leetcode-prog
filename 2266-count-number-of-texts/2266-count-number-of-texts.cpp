class Solution {
public:
    int n;
    int dp[100005] ;
    int mod = 1e9+7 ; 
    bool isSame(string x){
        
        for(int i=1;i<x.size();i++){
            if(x[i]!=x[i-1])
                return false;
        }
        return true ;
            
    }
    int go(int idx,string &s){
        
        if(idx>=n)
            return 1;
        int ans = 0 ;
        if(dp[idx]!=-1)
            return dp[idx] ;
        int bound = (s[idx]-'0'==7 or s[idx]-'0'==9) ? 4 : 3 ;
        for(int i=1;i<=bound;i++){
            
            if(idx+i<=n and isSame(s.substr(idx,i)) )
                ans=(ans+(go(idx+i,s))%mod)%mod;
           
        }
        return dp[idx] = ans % mod ;
    }
    int countTexts(string s) {
        n = s.size() ;
        memset(dp,-1,sizeof(dp)) ;
        return go(0,s);
    }
};