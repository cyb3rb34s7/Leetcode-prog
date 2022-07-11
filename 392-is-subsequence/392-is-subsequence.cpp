class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0 ,j=0 ; 
        while(i<s.size() and j<t.size()){
            if(s[i]==t[j])
            {
                i++ ;j++ ;
            }
            else
                j++ ; 
        }
        if(j==t.size() and i==s.size())
            return true; 
        if(j==t.size() and i<s.size()) 
            return false;
        return 1;
    }
};