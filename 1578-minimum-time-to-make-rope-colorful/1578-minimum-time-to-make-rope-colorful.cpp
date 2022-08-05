class Solution {
public:
    int minCost(string s, vector<int>& arr) {
        int lastMin = arr[0] ;
        int ans = 0 ;
        
        for(int i=1;i<s.size();i++){
            
            if(s[i]==s[i-1])
            {
                ans+= min(lastMin,arr[i]) ;
                lastMin = max(lastMin,arr[i]) ;
            }
            else
                lastMin = arr[i] ;
        }
        return ans; 
    }
};