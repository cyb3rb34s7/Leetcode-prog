class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majo, votes=0;
        
        for(auto x:nums){
            if(votes==0)
                majo=x;
            if(x==majo)
                votes++;
            else
                votes--;
                
        }
        return majo;
        
    }
};