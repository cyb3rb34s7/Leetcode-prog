class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,min_now=INT_MAX;
        for(auto x:prices){
            min_now = min(min_now,x);
            profit=max(x-min_now,profit); 
        }
        return profit;
    }
};