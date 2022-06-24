class Solution {
public:
    int myAtoi(string s) {
        int n =s.size() ; 
        
        int i = 0 ; 
        
        while(i<n and s[i]==' ')
            i++ ; 
        
        bool flag = true;
        if(s[i]=='-'){
            flag = false ; 
            i++ ; 
        }
        else if(s[i]=='+'){
            i++ ; 
        }
        int result = 0 ; 
        while(i<n and (s[i]-'0'>=0 and s[i]-'0'<=9)){
            int digit = s[i]-'0' ; 
            if(result > INT_MAX/10 or (result==INT_MAX/10 and digit > 7))
                return flag? INT_MAX:INT_MIN ; 
            
            result = result*10 + digit ; 
            i++ ; 
        }
        return flag ? result: -result ; 
        
    }
};