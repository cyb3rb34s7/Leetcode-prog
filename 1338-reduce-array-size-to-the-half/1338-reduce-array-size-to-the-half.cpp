class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp ;
        
        for(auto x:arr){
            mp[x]++ ; 
        }
        
        priority_queue<int> pq ;
        
        for(auto it:mp){
            pq.push(it.second) ;
        }
       int cnt =0 ;
        int n = 0 ;
        
        while(n<arr.size()/2){
            n+=pq.top();
            cnt++ ;
            pq.pop();
            
        }
       
        return cnt ;
    }
};