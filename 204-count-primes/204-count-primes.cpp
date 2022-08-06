class Solution {
public:
    int countPrimes(int n) {
        vector<int> dp(n+1,0) ;
        
        for(int i=2 ;i<n+1 ;i++){
            
            if(dp[i]==0)
            {
             dp[i] =1 ;
                int j=2 ; 
                while(i*j<=n){
                dp[i*j] = 2 ;
                    
                j++ ;
                }
            }
           
                   
        }
         int cnt = 0 ;
            for(int i=2 ;i<n ;i++){
                if(dp[i]==1)
                    cnt++;
            }
        return cnt ;
    }
};