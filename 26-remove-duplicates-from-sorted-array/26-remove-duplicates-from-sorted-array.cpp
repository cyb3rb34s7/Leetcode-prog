class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int low=1 ,high=1;
        while(high<nums.size()){
            if(nums[high]==nums[high-1])
                high++;
            else
            {nums[low]=nums[high] ;
            high++ ; low++;}
        }
        return low;
    }
};