class Solution {
public:
    void solve(int ind,string s,vector<string> &ds,vector<vector<string>> &res){
        if(ind==s.size()){
            res.push_back(ds);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(isPalindrome(s,ind,i)){
                ds.push_back(s.substr(ind,i-ind+1)) ; 
                solve(i+1,s,ds,res);
                ds.pop_back();
            }
        }
    }
    
    bool isPalindrome(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res; 
        
        vector<string> ds ; 
        
        solve(0,s,ds,res) ;
        return res;
    }
};