class Solution {
public:
    #define ll long long
    #define mod 1000000007
    int numFactoredBinaryTrees(vector<int>& arr) {
        unordered_map<int,ll> mp ;
        
        for(auto x:arr)
            mp[x] =1 ;
        
        sort(arr.begin(),arr.end()) ;
        
        for(int i=1;i<arr.size();i++){
            
            ll cnt = 0 ;
            
            for(int j=0;j<i;j++){
                
                if(arr[i]%arr[j]!=0) continue;
                
                if(mp.find(arr[i]/arr[j])!=mp.end()){
                    
                    cnt = (cnt + (mp[arr[j]] * mp[arr[i]/arr[j]]) %mod)%mod ; 
                }
            }
            mp[arr[i]]+=(cnt %mod);
        }
        ll ans = 0 ;
        for(auto it:mp){
            ans=(ans + it.second)%mod ;
        }
        return ans ;
    }
};