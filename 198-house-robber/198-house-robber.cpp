class Solution {
public:
    int dp[1001] ; 
    int func(int ind, vector<int> &nums){
        
        if(ind==0) return nums[ind] ;
        if(ind<0) return 0 ;
        if(dp[ind]!=-1)
            return dp[ind] ;
        int pick = nums[ind] + func(ind-2,nums) ; 
        int notPick = 0 + func(ind-1,nums) ;
        
        return dp[ind] = max(pick,notPick) ;
    }
    int rob(vector<int>& nums) {
        
        memset(dp,-1,sizeof(dp)) ;
        return func(nums.size()-1,nums) ;   
    }
};