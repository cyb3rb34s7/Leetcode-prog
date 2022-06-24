class Solution {
public:
    int strStr(string s, string k) {
        int n1=s.size() , n2 = k.size() ; 
        int i = 0 ; 
        int res= -1 ; 
        for(int j = 0 ;j<n1 ; j++ ) {
            if(s[j]==k[i]){
                res = j ; 
                int p = j ; 
                while(i<n2 and p<n1){
                    if(s[p]!=k[i])
                        break; 
                    p++ ; i++ ; 
                }
                if(i==n2)
                    return res; 
                else
                {
                    i=0 ; 
                    res=-1 ; 
                }
            }
        }
        return res; 
    }
};