class Solution {
public:
    vector<vector<int>> res  ; 
    
    void func(int ind,vector<int>&nums,vector<int>&ds){
        
        if(ind==nums.size())
        {
            res.push_back(ds) ;
            return ;
        }
        
        ds.push_back(nums[ind]) ;
        func(ind+1,nums,ds);
        ds.pop_back();
        
        func(ind+1,nums,ds) ;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        
        vector<int> ds ; 
        
        func(0,nums,ds) ; 
        return res ;
    }
};