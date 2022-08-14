class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int l = 0, r=0 ; 
        
        vector<int> res;
        
        priority_queue<pair<int,int>> pq ;
        
        while(r<nums.size()){
            
            pq.push({nums[r],r}) ;
            
            if(r-l+1 < k)
                r++;
            else if(r-l+1==k){
                
                while(pq.top().second< l)
                    pq.pop() ;
                
                res.push_back(pq.top().first) ;
                l++ ;r++ ;
            }
        }
        return res;
    }
};