class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string mp[26] ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."} ;
        set<string> st ;
        for(auto x:words){
            
            string s = "" ;
            
            for(auto y:x){
                
                s+=mp[y-'a'] ; 
            }
            st.insert(s);
        }
        return st.size();
    }
};