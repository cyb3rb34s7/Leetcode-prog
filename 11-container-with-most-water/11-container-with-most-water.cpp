
class Solution {
public:
    int max(int &a,int &b){
        if(a>b)
            return a;
        else
            return b ;
    }
    int maxArea(vector<int>& height) {
        int n =height.size() ; 
        
        vector<int> maxL(n) ,maxR(n);
        int Lmax = -1 , Rmax=-1 ; 
        for(int i =0;i<n;i++){
            Lmax = max(Lmax,height[i]) ;
            maxL[i] = Lmax ; 
        }
        for(int i=n-1;i>=0;i--){
            Rmax = max(Rmax,height[i]) ; 
            
            maxR[i] = Rmax ;
            
        }
        int i = 0 , j = n-1 ; 
        int maxWater = 0 ; 
        while(i<=j){
            if(maxL[i]<maxR[j]){
                int temp = maxL[i] * (j-i) ;; 
                maxWater = max(maxWater,temp) ; 
                i++ ; 
            }
            else
            {   int temp2  = maxR[j] * (j-i) ;
                maxWater = max(maxWater,temp2 ) ;
                j-- ;
            }
        }
        return maxWater ; 
    }
};