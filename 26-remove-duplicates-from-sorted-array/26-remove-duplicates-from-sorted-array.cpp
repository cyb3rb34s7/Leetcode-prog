class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
            return NULL;
            
        int change= 0,pass=1;

        for(pass;pass<n;pass++){
            if(nums[change]!=nums[pass]){
                change++;
                nums[change]=nums[pass];
            }
        }
        return change+1;
    }
};