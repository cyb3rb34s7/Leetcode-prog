class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        
        int m =arr.size() ;
        sort(arr.begin(),arr.end()) ;
        
        vector<vector<int>> res ;
        
        int low = arr[0][0], high = arr[0][1] ;
        
        for(int i=1;i<m;i++){
            if(arr[i][0]<=high)
            {
                high = max(high,arr[i][1]) ;

            }
            else{
                    res.push_back({low,high}) ;
                    low = arr[i][0] ;
                    high = arr[i][1] ;
                }
        }
        res.push_back({low,high}) ;
        return res; 
    }
};