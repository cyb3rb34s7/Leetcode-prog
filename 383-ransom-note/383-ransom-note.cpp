class Solution {
public:
    bool canConstruct(string ran, string mag) {
        unordered_map<char,int > mp ;
        
        for(auto x:mag){
            mp[x]++;
        }
        
        for(auto x:ran){
            
            mp[x]-- ;
            if(mp[x]<0){
                return false;
            }
        }
        return true;
    }
};