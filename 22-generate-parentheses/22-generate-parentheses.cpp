class Solution {
public:
    vector<string> ans ; 
    
    void func(string &s,int open,int close){
        
        if(open==0 and close==0)
        {
            ans.push_back(s) ; 
            return ;
        }
        
        
        if(open>0){
            s+='('; 
            func(s,open-1,close) ;
            s.pop_back() ;
        }
        
        
        if(close>0){
            
            if(open<close){
                
                s+=')';
                func(s,open,close-1);
                s.pop_back();
            }
        }
        
    }
    vector<string> generateParenthesis(int n) {
        string s ; 
        func(s,n,n) ; 
        
        return ans ;
    }
};