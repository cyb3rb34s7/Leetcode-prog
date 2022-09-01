class Solution {
public:
    int n ;
    int dp[301] ;
    bool go(int idx, string s, vector<string> &words){
        
        if(idx>=n)
            return 1 ; 
        
        if(dp[idx]!=-1)
            return dp[idx] ;
        for(int i=0;i<words.size();i++){
            
            if(words[i]==s.substr(idx, words[i].size()))
                if(go(idx+words[i].size(),s,words))
                    return dp[idx] = 1;
        }
        return dp[idx] = false;
    }
    bool wordBreak(string s, vector<string>& words) {
        memset(dp,-1,sizeof(dp)) ;
        n = s.size() ;
        
        return go(0,s,words) ;
    }
};