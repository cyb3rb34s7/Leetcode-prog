class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp ;
        
        for(auto x:arr){
            mp[x]++ ; 
        }
        
        vector<pair<int,int>> vec ;
        
        for(auto it:mp){
            vec.push_back({it.second,it.first}) ;
        }
        sort(vec.begin(),vec.end()) ;
        int cnt = 0 ; 
        int n = 0 ;
        for(int i = vec.size()-1;i>=0;i--){
           n+=vec[i].first ;
            cnt++;
            if(n>=arr.size()/2) 
                return cnt ;
        }
        return cnt ;
    }
};