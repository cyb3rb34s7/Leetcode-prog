class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n =nums.size() ; 
        
        int low = 0 ,high = n-1 ;
        
        while(low<=high){
            int mid = low+ (high-low)/2 ;
            
            if(nums[mid]==target)
                return mid ;
            
            else if(nums[mid]>=nums[low]) //to check if left half is sorted
            {
                if(target>=nums[low] && target<= nums[mid])
                    high=mid-1 ; //going left 
                else
                    low = mid+1 ;
                
            }
            else //this means right half is sorted 
            {
                if(target>=nums[mid] && target <=nums[high])
                    low=mid+1 ;
                else
                    high=mid-1 ;
            }
                
        }
        return -1 ;
        
        
    }
};