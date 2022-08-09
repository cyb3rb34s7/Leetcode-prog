class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        unordered_map<int,long long int> mp ;
        
        long long mod =1e9+7 ;
        sort(arr.begin(),arr.end()) ;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]] =1 ;
        }
        
        for(int i =1;i<arr.size();i++){
            long long int cnt = 0 ;
            for(int j=0 ;j<i;j++){
                if(arr[i] % arr[j] == 0){
                    if(mp.find(arr[i]/arr[j])!=mp.end())
                        cnt+= (mp[arr[j]] * mp[arr[i]/arr[j]]) % mod ;
                    
                }
            }
            mp[arr[i]]+=cnt % mod  ;
        }
        long long int ans = 0;
        for(auto it:mp){
            ans=(ans + it.second)%mod ;
        }
        
        return ans%mod ;
    }
};