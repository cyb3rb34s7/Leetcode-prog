class Solution {
public:
    void permute(vector<int> &ds, vector<int> &freq, vector<int> &nums, vector<vector<int>> &res){
        if(ds.size()==nums.size()){
            res.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]); 
                freq[i] = 1; // not available
                permute(ds,freq,nums,res); 
                freq[i]=0;
                ds.pop_back(); 
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res; 
        vector<int> ds; 
        vector<int> freq(nums.size(),0); 
        
        permute(ds,freq,nums,res) ; 
        return res;
        
    }
};