class Solution {
public:
    bool func(string &s ,string &b){
        unordered_map<char,char> mp1,mp2 ; 
        
        char cnt = 'a' ; 
        
        string temp1 ; 
        
        
       
        cnt='a' ; 
         for(int i =0;i<b.size();i++){
            if(mp2.find(b[i])==mp2.end()){
                mp2[b[i]] = cnt ;
                temp1+=cnt ; 
                cnt = char(cnt+1) ;
               
            }
             else
                 temp1+=to_string(mp2[b[i]]) ;
            
            
        }
       
        return temp1==s ;
        
    }
    vector<string> findAndReplacePattern(vector<string>& words, string s) {
       int n = words.size(); 
        vector<string> res ; 
        unordered_map<char,char> mp1 ; 
        char cnt = 'a' ;
        string temp ; 
        for(int i =0;i<s.size();i++){
            if(mp1.find(s[i])==mp1.end()){
                mp1[s[i]] = cnt ; 
                temp+=cnt ; 
                cnt = char(cnt+1) ;
               
            }
            
            else
                temp+=to_string(mp1[s[i]]); 
             
            
        }
        for(int i=0;i<n;i++){
            if(func(temp,words[i]))
                res.push_back(words[i]) ;
        }
        return res ;
    }
};