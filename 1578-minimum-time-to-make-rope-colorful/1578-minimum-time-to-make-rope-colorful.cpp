class Solution {
public:
    int minCost(string s, vector<int>& arr) {
       
        int ans = 0 ;
        
        for(int i=1;i<s.size();i++){
            
            if(s[i]==s[i-1])
            {
                ans+= min(arr[i-1],arr[i]) ;
                arr[i] = max(arr[i-1],arr[i]) ;
            }
            
        }
        return ans; 
    }
};