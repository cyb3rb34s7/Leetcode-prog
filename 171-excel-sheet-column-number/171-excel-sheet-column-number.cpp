class Solution {
public:
    int titleToNumber(string columnTitle) {
       int res = 0 ; 
        
        
        for(auto c:columnTitle){
            
            int x = c-'A' +1 ; 
            
            res = res*26 + x ; 
        }
        return res; 
    }
};