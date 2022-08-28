class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n =nums.size() ;
        
        int i = n-1;
        
        while(i>0 and nums[i]<=nums[i-1]){
            i-- ;
        }
        
        int last = i-1 ;
        if(last <= -1)
        {
            reverse(nums.begin(),nums.end()) ;
            return ;
        }
        int maxx ;
        for(int i=last+1;i<n;i++){
            if(nums[i]>nums[last])
                maxx = i;
        }

        swap(nums[last],nums[maxx]) ;
       
        reverse(nums.begin()+last+1,nums.end()) ;
        
        
    }
};