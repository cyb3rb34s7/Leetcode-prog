class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size() ; 
        
        int i = 0 , j = n-1 ;
        int res = 0 ; 
        while(i<=j){
            int temp = min(h[i],h[j]) * (j-i) ; 
            res = max(res,temp) ;
            
            if(h[i]<h[j]) i++ ;
            else j-- ;
        }
        return res ; 
    }
};