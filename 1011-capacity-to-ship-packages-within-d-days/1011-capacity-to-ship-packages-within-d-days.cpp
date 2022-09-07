class Solution {
public:
    
    bool isPossible(int cap, vector<int>&arr, int d){
        
        int i = 0 ; 
        int temp = cap ; 
        while(d!=0 and i<arr.size()){
            
            if(cap-arr[i]>=0)
               { cap-=arr[i] ;
                i++ ; 
               }
            else
            {
                d-- ; 
                cap = temp ; 
            }
            
            
        }
        return i==arr.size() ; 
        
    }
    int shipWithinDays(vector<int>& arr, int d) {
        int l = 1 ;
        
        int r = 25000005 ;  
        int ans  ; 
        while(l<=r){
            
            int mid = l+(r-l)/2 ; 
            
            if(isPossible(mid,arr,d))
               { ans = mid ;
                r = mid-1 ;
               } 
            else
                l = mid+1 ;
        }
        return ans ;
    }
};