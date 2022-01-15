class Solution {
public:
    bool backspaceCompare(string s, string t) {
       
        stack<char> st1;
        stack<char> st2;
        string str1,str2;
        for(auto x:s){
            if(x=='#')
            { if(st1.empty()==false)
                st1.pop();
            else 
                continue;
                    
            }
            else
            {
        
                st1.push(x);
            }
                
        }
        for(auto x:t){
            if(x=='#')
            {
                if(st2.empty()==false)
                    st2.pop(); 
                else
                    continue;
            }
            else
                st2.push(x);
        }
        
      return st1==st2;
        
    }
};