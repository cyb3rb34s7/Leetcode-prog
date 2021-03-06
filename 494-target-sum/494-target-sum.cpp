class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int diff) {
        
        int sum = accumulate(nums.begin(),nums.end(),0); 
        
        int n=nums.size() ; 
        if(sum<abs(diff) or (diff+sum)%2 != 0)
            return 0 ; 
        int w = (sum + diff)/2 ; 
        
        
        int dp[n+1][w+1] ; 
        
        for(int j=0;j<w+1;j++)
            dp[0][j] = 0 ; 
        for(int i=0;i<n+1;i++)
            dp[i][0] =1 ;
        
        for(int i=1;i<n+1;i++){
            for(int j=0;j<w+1;j++){
                if(nums[i-1]<=j)
                    dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j] ; 
                else
                    dp[i][j] = dp[i-1][j] ;
            }
        }
        return dp[n][w] ;
    }
};