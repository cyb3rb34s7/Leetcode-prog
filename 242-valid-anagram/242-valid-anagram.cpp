class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        
        unordered_map<char,int> st ; 
        for(auto x : s){
            st[x]++;
        }
        for(auto x :t){
            if(st[x]>0)
                st[x]--;
            else 
                return false;
        }
        return true;
    }
};