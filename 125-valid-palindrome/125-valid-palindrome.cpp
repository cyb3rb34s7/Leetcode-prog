class Solution {
public:
    bool isPalindrome(string s) {
        string ans="" ;
        
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' and s[i]<='z') ans+=s[i] ;
            else if(s[i]>='A' and s[i]<='Z') ans+=tolower(s[i]) ;
            else if(s[i]>='0' and s[i]<='9')ans+=s[i] ; 
                }
        
        int i=0,j=ans.size()-1 ;
    cout<<ans;
        while(i<=j){
            if(ans[i++]!=ans[j--])
                return false;
        }
        return true;
    }
};