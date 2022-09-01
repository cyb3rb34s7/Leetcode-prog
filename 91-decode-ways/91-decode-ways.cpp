class Solution {
public:
    int n ;
    int dp[101] ;
    int go(int idx,string &s){
        if(idx>=s.size())
            return 1 ; 
        if(s[idx]=='0')
            return 0 ; 
        if(dp[idx]!=-1)
            return dp[idx] ;
        int ans = 0 ; 
        
        if(idx+1<n and stoi(s.substr(idx,2))<=26)
            ans+= go(idx+2,s) ;
        
        ans+=go(idx+1,s) ;
        
        return dp[idx] = ans  ;
    }
    int numDecodings(string s) {
        n = s.size() ;
        memset(dp,-1,sizeof(dp)) ;
        if(s.size()==0)
            return 0 ; 
        
        return go(0,s) ; 
        
    }
};