
class Solution {
    struct compare{
        public:
            bool operator()(pair<int,string> &p1 , pair<int,string> &p2) {
        if(p1.first==p2.first)
                return p1.second>p2.second ;
            

                return p1.first<p2.first;
    }
    };
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int> mp ; 
        
        for(auto x:words)
            mp[x]++ ; 
        
        priority_queue<pair<int,string>, vector<pair<int,string>>,compare>pq;
        
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        vector<string> ans ; 
        while(k--)
        {
            string s = pq.top().second ; 
           
            pq.pop() ; 
            ans.push_back(s) ;
        }
        return ans ; 
    }
};