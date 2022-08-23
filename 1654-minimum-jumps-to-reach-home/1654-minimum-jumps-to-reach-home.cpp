class Solution {
public:
    bool vis[6001][2];
    int dp[6001][2] ;
    int go(int idx,bool state,int a,int b,int x,unordered_set<int> &st){
        
        if(idx==x)
            return 0 ;
        if(idx<0 or idx>6000 or st.find(idx)!=st.end())
            return 1e9 ;
        if(dp[idx][state]!=-1)
            return dp[idx][state] ;

        if (vis[idx][state] != 0) {
            // cout<<idx<<" "<<state<<endl;
            return 1e9;
        }
        else {
            vis[idx][state] = 1;
        }

        
        int ans =1e9;//INT_MAX ;
        if(idx-b >=0 and st.find(idx-b)==st.end() and state==false)
            ans = min(ans,go(idx-b,true,a,b,x,st)+1) ;
        
        if(st.find(idx+a)==st.end())
        {
            ans = min(ans,min(go(idx+a,false,a,b,x,st)+1,go(idx+a,true,a,b,x,st)+1)) ;
        }
        
        return dp[idx][state] = ans ;
    }
    int minimumJumps(vector<int>& vec, int a, int b, int x) {
        memset(vis,0, sizeof(vis));
        memset(dp,-1,sizeof(dp)) ;
        unordered_set<int> st(vec.begin(),vec.end()) ;
                 
        int ans = go(0,false,a,b,x,st) ;
        
        ans = (ans>=1e9) ? -1 :ans ;
        
        return ans ;
    }
};