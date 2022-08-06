class Solution {
public:
    int rob(vector<int>& nums) {
        int n  = nums.size();
        
        vector<int> dp(102,0) ; 
        
        
        dp[0] = 0 ; 
        dp[1] = nums[0] ; 
        
        for(int i = 2 ; i<n+1 ;i++){
            int pick = nums[i-1] + dp[i-2] ;
            int notPick = 0 + dp[i-1] ;
            
            dp[i] = max(pick,notPick) ;
        }
        return dp[n] ;
    }
};