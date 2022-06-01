class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        int low= intervals[0][0] ,high=intervals[0][1] ; 
        vector<vector<int>> res;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=high){
                low= min(low,intervals[i][0]);
                high=max(high,intervals[i][1]);
            }
                
            else
            {
                res.push_back({low,high});
                low= intervals[i][0] ;
                high= intervals[i][1] ;
            }
        }
        res.push_back({low,high});
        
        return res;
    }
};