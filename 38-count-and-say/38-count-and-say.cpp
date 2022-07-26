class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1"; 
        
        string s = countAndSay(n-1) ; 
       
        int i = 0 ; 
        string ans="" ;
        while(i<s.size()) {
            
            int cnt = 1 ;
            while(i<s.size()-1 and s[i]==s[i+1] ){
                cnt++ ; i++ ; 
            }
            
            ans+= to_string(cnt) + s[i] ; 
             
            i++ ;  
        }
       
        return ans ; 
    }
};