class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end()) ;
        
        if(nums.size()<3)
            return {}; 
        if(nums[0]>0)
            return {};
        
        vector<vector<int>> res;
        set<vector<int>> st ; 
        
        for(int i=0;i<nums.size();i++)
        {   
            int l = i+1 ,h=nums.size() -1 ; 
            int target = -1*nums[i];
            while(l<h){
                if(nums[l]+nums[h]>target)
                    h--;
                else if(nums[l]+nums[h]<target)
                    l++;
                else
                {
                    st.insert({nums[i],nums[l],nums[h]});
                        h--; l++;
                }
            }
               
            }
        
        for(auto s:st){
            res.push_back(s);
        }
        return res;
    }
};