class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0,high =nums.size() -1 ;
        if(nums.size()==1) return nums[0];
        int mid,neighbour ; 
        while(low<=high){
            
             mid = (low+high)/2 ;
            
             neighbour = (mid%2==0) ? mid+1 : mid-1 ;
            
            if(nums[mid]==nums[neighbour])
                low = mid+1 ;
            else
                high = mid-1 ;
            
        }
        return nums[low] ;
    }
};