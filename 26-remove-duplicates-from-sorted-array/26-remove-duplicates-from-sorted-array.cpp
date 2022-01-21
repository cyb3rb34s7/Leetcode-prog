class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
            return NULL;
            
        int change= 0,pass=1;
        while(pass<n){
            if(nums[change]==nums[pass])
                pass++;
            else
            {
                change++;
                nums[change]=nums[pass];
                pass++;
            }
        }
        return change+1;
    }
};