class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n =nums.size();
        vector<int> prefsum;
        prefsum.push_back(nums[0]);
        for(int i =1;i<n;i++){
            int prefsu=prefsum[i-1]+nums[i];
            prefsum.push_back(prefsu);
            
        }
        
        if(prefsum[n-1]-nums[0]==0) return 0;
        
        
        for(int i = 1 ; i <n;i++){
           int rsum= prefsum[n-1]-prefsum[i];
            if(prefsum[i-1]==rsum)
                return i;
            else
                continue;
        }
        
        if(prefsum[n-1]-nums[n-1]==0) return n-1;
        return -1;
    }
};