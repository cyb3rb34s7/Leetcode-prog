class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0, votes=0;
        
        for(auto x:nums){
            if(votes==0)
                candidate=x;
            if(x==candidate)
                votes++;
            else
                votes--;
        }
        return candidate;
    }
};