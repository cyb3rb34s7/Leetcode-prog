class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& string_list) {
         unordered_map<string,vector<string>> mp;
        string temp;
        for(auto x:string_list)
        {
            temp=x;
            sort(x.begin(),x.end());
            mp[x].push_back(temp);
        }
        
        vector<vector<string>> res;
        
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            res.push_back(itr->second);
        }
        return res;
    }
};