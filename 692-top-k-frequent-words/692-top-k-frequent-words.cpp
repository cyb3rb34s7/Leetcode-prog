
class Solution {
static bool compare(pair<int,string> &p1 , pair<int,string> &p2) {
        if(p1.first==p2.first)
                return p1.second>p2.second ;
            

                return p1.first<p2.first;
    }
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int> mp ; 
        
        for(auto x:words)
            mp[x]++ ; 
        
        vector<pair<int,string>> pq; 
        
        for(auto it:mp)
        {
            pq.push_back({it.second,it.first});
        }
        sort(pq.begin(),pq.end(),compare) ; 
        vector<string> ans;
        int i=pq.size()-1 ; 
        while(k--){
            ans.push_back(pq[i].second) ; 
            i-- ;
        }
        return ans; 
        
    }
};