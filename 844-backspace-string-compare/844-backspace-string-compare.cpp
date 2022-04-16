class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2 ; 
    
        for(auto x:s){
            if(x=='#')
            {
                if(!st1.empty())
                    st1.pop();
                else
                    continue;
            }
                
            else
                st1.push(x) ; 
        }
        for(auto x:t){
           if(x=='#')
            {
                if(!st2.empty())
                    st2.pop();
                else
                    continue;
            }
                
            else
                st2.push(x) ; 
        }
        return st1==st2;
    }
};