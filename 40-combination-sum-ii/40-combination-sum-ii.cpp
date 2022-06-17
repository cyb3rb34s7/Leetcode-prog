class Solution {
public:
    
    void findComb(int i, int target, vector<int>&arr, vector<vector<int>> &ans, vector<int> &ds ){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        
        for(int j=i;j<arr.size();j++){
            if(j>i && arr[j]==arr[j-1]) continue ; 
            if(arr[j]>target) break; 
            
            ds.push_back(arr[j]) ; 
            findComb(j+1,target-arr[j],arr,ans,ds);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<vector<int>> ans; 
        
        vector<int> ds ; 
        sort(arr.begin(),arr.end()) ; 
        findComb(0,target, arr, ans,ds)  ; 
        return ans; 
    }
};