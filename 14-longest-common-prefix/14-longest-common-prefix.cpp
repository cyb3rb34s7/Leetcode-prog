class Solution {
public:
    string longestCommonPrefix(vector<string>& word) {
        sort(word.begin(),word.end()) ; 
        string ans="";
        
        string a=word[0] ; 
        string b = word[word.size()-1] ; 
        
        for(int i= 0 ; i<a.size() ;i++){
            if(a[i]==b[i])
                ans+=a[i];
            else
                break;
        }
        return ans ;
        
    }
};