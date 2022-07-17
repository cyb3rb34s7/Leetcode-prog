class Solution {
public:
     vector<int> countBits(int n) {
        
         vector<int> res(n+1) ;
         if(n==0) return {0} ;
        for(int i=0;i<=n;i++){
                if(i%2==0)
                    res[i] = res[i/2]; 
                else
                {
                    res[i] = res[i-1] +1 ; 
                }
        }
        return res; 
    }
};