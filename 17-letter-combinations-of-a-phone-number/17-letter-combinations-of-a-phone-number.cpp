class Solution {
public:
    void func(int ind,string &s, vector<string> &ds, string &ans,unordered_map<char,vector<string>> &mp){
        
        if(ind==s.size()){
            ds.push_back(ans) ;
            return;
        }
        
        for(int i =0 ;i<mp[s[ind]].size() ;i++){
            
            ans += mp[s[ind]][i] ;
            
            func(ind+1,s,ds,ans,mp) ; 
            
            ans.pop_back() ;
        }
    }
    vector<string> letterCombinations(string s) {
        string ans = ""  ; 
        if(s.size()==0)
            return {};
        unordered_map<char,vector<string>> mp ; 
        mp['2'] = {"a","b","c"} ; 
        mp['3'] = {"d","e","f"} ;
        mp['4'] = {"g","h","i"} ;
        mp['5'] = {"j","k","l"} ;
        mp['6'] = {"m","n","o"} ;
        mp['7'] = {"p","q","r","s"} ;
        mp['8'] = {"t","u","v"} ;
        mp['9'] = {"w","x","y","z"} ;
        
        vector<string> ds ; 
        
        func(0,s,ds,ans,mp) ;
        
        return ds ; 
    }
};