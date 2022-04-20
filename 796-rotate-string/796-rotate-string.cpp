class Solution {
public:
    string rotateS(string &s){
        int n = s.size() ; 
        char c = s[n-1] ; 
        for(int i = n-2 ; i>=0 ; i--){
            s[i+1] = s[i] ; 
        }
        s[0] = c;
        return s;
    }
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
      for(int i =0 ;i<s.size() ; i++){
            rotateS(s) ;
          if(s==goal)
              return true;
      }
        return false;
        
    }
};