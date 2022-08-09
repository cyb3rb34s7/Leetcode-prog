class Solution {
public:
    int count(vector<int> &nums1,vector<int> &nums2, int x){
        int m = nums2.size() ,n = nums1.size() ;
        int cnt = 0;
        int low = 0,high = n-1 ;
        while(low<=high){
            int mid = (low+high)/2 ;
            
            if(nums1[mid]>x)
                high = mid-1 ;
            else
                low =mid+1 ;
        }
        cnt+=low ;
        low =0,high =m-1 ;
        while(low<=high){
            int mid = (low+high)/2 ;
            
            if(nums2[mid]>x)
                high = mid-1 ;
            else
                low =mid+1 ;
        }
        cnt+=low ;
        
        return cnt ;
    }
    int func(vector<int> &nums1,vector<int> &nums2, int numbers){
        int m=nums1.size() ,n = nums2.size();
        int low = min(nums1[0],nums2[0]) , high = max(nums1[m-1],nums2[n-1]);
        
        int mid ; 
        while(low<=high){
            
            mid = (low+high)/2 ; 
          
            int temp = count(nums1,nums2,mid);
            
            if(temp > numbers/2){
                high = mid-1 ;
            }
            else
                low = mid+1 ;
        }
        return low ;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size() ;
        int n = nums2.size() ; 
        int M = m+n ; 

        
        if(m == 0 && n != 0 && n%2 == 0)
            return (nums2[n/2] + nums2[(n/2)-1])/2.0;

        if(n == 0 && m != 0 && m%2 == 0)
            return (nums1[m/2] + nums1[(m/2)-1])/2.0;

        if(m == 0 && n != 0 && n%2 != 0)
            return (nums2[n/2]);

        if(n == 0 && m != 0 && m%2 != 0)
            return (nums1[m/2]);
        double median ; 
        if(M%2==0)
            median = (func(nums1,nums2,M) + func(nums1,nums2,M-1))/2.0 ;
        else
            median = func(nums1,nums2,M) ;
        
        return median ;
    }
};