class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s =  to_string(n) ;

        sort(s.begin(),s.end()) ;
        string ans=""; long long x = 1 ;
        
        while(ans.size()<=s.size()) {
            string temp = to_string(x);
            sort(temp.begin(),temp.end()) ;
            
            if(temp==s)
                return true;
            x*=2 ; 
            ans = temp ;
        }
        return false;
    }
};