class Solution {
public:
    int evalRPN(vector<string>& tokens) {
     stack<int> st ; 
        
        for(auto x:tokens){
            
            if(x=="*" or x=="-" or x=="+" or x=="/"){
                
                int a = st.top() ; st.pop() ;
                int b = st.top()  ; st.pop() ;
                
                int ans ; 
                if(x=="*") ans = b*a ;
                else if(x=="-") ans = b-a ;
                else if(x=="+") ans = b+a ;
                else if(x=="/") ans = b/a ;
                
                st.push(ans) ;
             }
            else
            {
                st.push((stoi)(x)) ; 
            }
            
        }
        return st.top() ;
    }
};