class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int> fr(n,0);
        for(int i =0 ;i<n;i++)
        {
           fr[nums[i]]++;  
            if(fr[nums[i]]>1)
                return nums[i];
        }  
    return -1;
    }
};