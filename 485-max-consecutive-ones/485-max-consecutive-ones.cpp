class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes =0, cnt= 0 ; 
        for(auto x:nums){
            if(x==1)
            {
                cnt++ ;
                maxOnes= max(maxOnes,cnt);
            }
            else
                cnt=0;
        }
        return maxOnes;
    }
};