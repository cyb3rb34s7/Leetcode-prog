class Solution {
public:
    int countVowelPermutation(int n) {
        long long a=1,e=1,i=1,o=1,u=1 ; 
        
        long long sum;
        int mod = 1e9+ 7 ; 
        
        
       
        for(int k=0;k<n;k++){
            
            sum = (a+e+i+o+u )%mod;
            long long mp[5]= {a,e,i,o,u} ; 
            a = (mp[1]+ mp[2] +mp[4]) %mod ;
            e = (mp[0]+ mp[2])%mod ; 
            i = (mp[1] + mp[3]) %mod ;
            o = (mp[2])%mod ;
            u = (mp[2] + mp[3]) %mod ; 
            
        }
        return sum%mod ;
        
    }
};