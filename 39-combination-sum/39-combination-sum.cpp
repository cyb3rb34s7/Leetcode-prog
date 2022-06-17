class Solution {
public:
   void findCombinations(int ind,vector<int> &ds, vector<int> &candidates,int target , int n,vector<vector<int>> &res){
        
        if(ind==n){
            if(target==0)
                res.push_back(ds);
            return;
            
        }
        //pick condition
       //only be picked if it does not exceeds the target
       if(candidates[ind]<=target){
               ds.push_back(candidates[ind]);
                findCombinations(ind,ds,candidates,target-candidates[ind],n,res) ; 

                ds.pop_back() ; 
        
       }
        
        //notpick condition
        findCombinations(ind+1,ds,candidates,target,n,res) ; 
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds; 
        vector<vector<int>> res;
        int n=candidates.size() ; 
        findCombinations(0,ds,candidates,target,n ,res);
        return res;
    }
};