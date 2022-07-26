class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp  ;
        
        for(auto x:nums)
            mp[x]++ ; 
        vector<pair<int,int>> p ;
        for(auto it:mp){
            p.push_back({it.second,it.first});
        }
        sort(p.begin(),p.end()) ;
        
        vector<int> res ; 
        
        for(int i = p.size()-1 ; i>=p.size()-k and i>=0 ; i--){
            res.push_back(p[i].second) ;
        }
        
        return res ; 
    }
};