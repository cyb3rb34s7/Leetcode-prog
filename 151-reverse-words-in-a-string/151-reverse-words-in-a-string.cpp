class Solution {
public:
    string reverseWords(string s) {
        int i = 0 ; 
        string ans="";
        
       for(int i = 0;i<s.size();i++){
            string temp="" ; 
            if(s[i]==' ') continue;
            while(s[i]!=' ' and i<s.size()){
                temp+=s[i] ; 
                i++ ; 
                
            }
             
            
            reverse(temp.begin(),temp.end()) ; 
            ans+=temp+s[i] ; 
        }
        reverse(ans.begin(),ans.end()) ; 
        ans.erase(0,1) ; 
        return ans;
        
    }
};