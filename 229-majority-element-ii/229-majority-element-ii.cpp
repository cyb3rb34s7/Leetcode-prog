class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> mp ; 
        vector<int> res;
        for(auto x:nums){
            mp[x]++;
            
        }
        for( auto it=mp.begin();it!=mp.end();it++){
            if(it->second>nums.size()/3)
                res.push_back(it->first);
        }
        return res;
    }
};