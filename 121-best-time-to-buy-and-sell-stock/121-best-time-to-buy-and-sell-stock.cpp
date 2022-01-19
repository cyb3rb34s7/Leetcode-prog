class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_left=INT_MAX;
        int profit=0;
       for(auto x:prices){
           min_left=min(min_left,x);
           profit=max(profit,x-min_left);
       } 
        return profit;
    }
};