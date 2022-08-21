class Solution {
public:
    int solve(vector<int>&nums, int mod,int idx,vector<vector<int>>&dp){
        if(idx>=nums.size()){
            if(mod==0) return 0;
            else return -1e9;
        }
        if(dp[idx][mod]!=-1) return dp[idx][mod];
        int notPick=solve(nums,mod,idx+1,dp);
        
        int pick=nums[idx]+solve(nums,(mod+nums[idx])%3,idx+1,dp);
        return dp[idx][mod]=max(notPick,pick);
        
    }
    int maxSumDivThree(vector<int>& nums) {
        int mod=0;
        //int ans=0;
        int sum=0;
        vector<vector<int>>dp(nums.size(),vector<int>(3,-1));
        return solve(nums,mod,0,dp);
    }
};