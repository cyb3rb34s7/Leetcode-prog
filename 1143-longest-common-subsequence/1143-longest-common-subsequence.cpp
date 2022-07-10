class Solution {
public:
    int func(int ind1, int ind2, string &a, string &b,vector<vector<int>> &dp){
        if(ind1==0 or ind2==0)
            return 0 ; 
        if(dp[ind1][ind2]!=-1)
            return dp[ind1][ind2] ; 
        if(a[ind1-1]==b[ind2-1])
            {
            return dp[ind1][ind2] = 1 + func(ind1-1,ind2-1,a,b,dp) ; }
        else
            return dp[ind1][ind2] = max(func(ind1-1,ind2,a,b,dp),func(ind1,ind2-1,a,b,dp)) ; 
    }
    int longestCommonSubsequence(string a, string b) {
        int n = a.size() ,m= b.size()  ; 
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1)) ; 
        
        

        return func(n,m,a,b,dp) ; 
    }
};