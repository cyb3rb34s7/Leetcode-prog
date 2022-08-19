class Solution {
public:
    int n; 
    // type 0: subarray not started
    //1 : subarray started but no deletion
    //2 : subarray started but 1 deletion 
    //3 : subarray ended
    int dp[100005][4] ;
    int go(int idx,int type,vector<int> &arr){
        
        if(idx>=n){
            if(type!=0)
                return 0;
            else
                return INT_MIN ;
        }
         if(dp[idx][type]!=-1)
             return dp[idx][type] ;
        int ans = INT_MIN ;
        if(type==0)
            ans =  max(ans,max(go(idx+1,0,arr),go(idx+1,1,arr)+arr[idx])) ;
          
        else if(type==1)
            ans = max(ans,max(go(idx+1,3,arr),(max(go(idx+1,2,arr),go(idx+1,1,arr)+arr[idx])))) ;
        else if(type==2)
            ans = max(ans,max(go(idx+1,2,arr)+arr[idx],go(idx+1,3,arr))) ;
        else
            ans = max(ans,go(idx+1,3,arr)) ;
        
        return dp[idx][type] = ans ;
                      
        
        
    }
    int maximumSum(vector<int>& arr) {
        n =arr.size() ;
        memset(dp,-1,sizeof(dp)) ;
        return go(0,0,arr);
    }
};