class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0=0,cnt1=0;
        for(auto x:nums){
            if(x==0)
                cnt0++;
            if(x==1)
                cnt1++;
        }
        for(int i =0;i<nums.size();i++){
            if(i<cnt0)
                nums[i]=0;
            else if(i>=cnt0 and i<cnt0+cnt1)
                nums[i]=1;
            else
                nums[i]=2;

        }
        
    }
};