class Solution {
public:
    bool isHappy(int n) {
        set<int> st ; 
        
        int val, ind ; 
        
        while(1){
            val = 0 ; 
            
            while(n){
                ind = n%10 ; 
                
                val+= ind*ind ; 
                n=n/10 ; 
            } 
                if(val==1)
                    return true;
                
                if(st.find(val)!=st.end())
                    return false;
                else
                    st.insert(val); 
                
            
            n = val ; 
            
        }
    }
};