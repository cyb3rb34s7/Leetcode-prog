class Solution {
public:
    int to_int(string &s){
        int sum = 0 ;
        bool sign = false;
        if(s[0]=='-')
            sign = true ;
        for(int i=0;i<s.size();i++){
            if(sign and i==0) continue;
            sum = sum*10 + s[i] -'0' ; 
        }
        sum = (sign) ? sum*-1 : sum ;
        return sum ;
    }
  
    int evalRPN(vector<string>& tokens) {
     
        stack<int> st ;
        
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+")
            {
                int a = st.top() ; st.pop() ;
                int b = st.top() ; st.pop() ;
                st.push(b+a) ;
            }
            else if(tokens[i]=="-"){
                 
            
                int a = st.top() ; st.pop() ;
                int b = st.top() ; st.pop() ;
                st.push(b-a) ;
            
            }
            else if(tokens[i]=="*"){
                 int a = st.top() ; st.pop() ;
                int b = st.top() ; st.pop() ;
                st.push(b*a) ;
            }
            else if(tokens[i]=="/"){
                 int a = st.top() ; st.pop() ;
                int b = st.top() ; st.pop() ;
                st.push(b/a) ;
            }
            else{
                st.push(to_int(tokens[i])) ;
            }
            
        }
        return st.top() ;
    }
};