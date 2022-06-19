class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size() ; 
        int l=0 ,h = n- 1 ; 
        if(n==1) return nums[0]; 
        while(l <= h) {
            int mid = l + (h-l)/2 ; 
            
            if(mid > 0 and mid < n-1)
               {
                if(nums[mid] != nums[mid + 1] and nums[mid] != nums[mid - 1] )
                    return nums[mid] ; 
            
                else if( mid % 2 == 0){
                    if(nums[mid] == nums[mid + 1])
                        l = mid + 1 ;
                    else
                        h = mid - 1 ; 
                }
                else if( mid % 2 != 0){
                    if(nums[mid] == nums[mid - 1])
                        l = mid + 1 ; 
                    else
                        h = mid - 1 ; 
                }
            }
            else
            {
                if(mid == 0){
                    if(nums[0] != nums[1])
                        return nums[0] ; 
                }
                else if( mid == n-1)
                    if(nums[n - 1] != nums[n - 2])
                        return nums[n - 1] ; 
            }
        }
        return -1;
    }
};