class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int minTillNow = INT_MAX ;
        int ans = 0 ; 
        for(auto x:prices){
            
            minTillNow = min(minTillNow,x) ;
            ans = max(ans, x-minTillNow) ;
        }
        return ans ;
    }
};