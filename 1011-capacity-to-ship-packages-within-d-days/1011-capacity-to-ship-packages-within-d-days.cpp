class Solution {
public:
    
    bool isPossible(int cap, vector<int>&arr, int d){
        
       int cnt = 1 , sum = 0 ;
        
        for(int i=0;i<arr.size();i++){
            sum+=arr[i] ; 
            if(sum>cap)
            {   cnt++; 
                sum = arr[i] ;
            }
             if(cnt>d)
            return  false;
        }
        
       
        return true ;
        
    }
    int shipWithinDays(vector<int>& arr, int d) {
        int l = *max_element(arr.begin(),arr.end()) ;
        
        int r  = accumulate(arr.begin(),arr.end(),0) ;  
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