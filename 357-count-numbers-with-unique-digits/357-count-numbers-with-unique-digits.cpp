class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)
            return 1 ;
        
        int ans = 10  ;
        int curr=9;
        int start = 9 ;
        
        while(n-->1 and start!=0){
            
            curr*=(start--) ; 
            ans+=curr ;
        }
        return ans ;
        
    }
};