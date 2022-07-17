class Solution {
public:
    int solve(int ind, vector<int> &cost,vector<int> &dp){
        
        if(ind>=cost.size())
            return 0 ;
        if(dp[ind]!=-1)
            return dp[ind] ;
        return dp[ind] = min(solve(ind+1,cost,dp),solve(ind+2,cost,dp)) + cost[ind] ;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        
        vector<int> dp(cost.size()+2,-1) ; 
        return min(solve(0,cost,dp),solve(1,cost,dp)) ;
    }
};