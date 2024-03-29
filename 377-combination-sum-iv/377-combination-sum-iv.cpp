class Solution {
public:
    int dp[1001]  ;
    int func(vector<int> &nums,int target,int n){
        
        if(target==0) return 1;
        int take  = 0 ;
        if(dp[target]!=-1)
            return dp[target] ;
        for(int i=0 ;i<n;i++){
            if(nums[i]<=target)
                take+= func(nums,target-nums[i],n);
        }
        return dp[target] = take; 
    }
    int combinationSum4(vector<int>& nums, int target) {
        int n =nums.size() ;
        memset(dp,-1,sizeof(dp)) ;
        return func(nums,target,n) ;
    }
};