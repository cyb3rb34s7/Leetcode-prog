class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int high= m+n-1 , low= m-1,mid=n-1;
        
        while(high>=0){
            if(low<0 or mid<0)
                break;
            nums1[high--] = nums1[low]>nums2[mid] ? nums1[low--] : nums2[mid--] ;
        }
        if(low<0)
        {
            while(high>=0){
                nums1[high--]=nums2[mid--];
            }
        }
        if(mid<0)
        {
            while(high>=0){
                nums1[high--]=nums1[low--];
            }
        }
        
    }
};