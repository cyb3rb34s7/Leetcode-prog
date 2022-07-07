class Solution {
public:
    int lastStoneWeightII(vector<int>& arr) {
        //take any two group of stones , if there will be equal stones they will cancel out each other 
        // else they will create diff, we have to find minimum possible difference 
        //it is equivalent to minimum subset sum difference problem 
        
        int n=arr.size() ;
        int sum = 0 ; 
	    for(int i=0;i<n;i++)
	        sum+=arr[i] ;
	    
	    //now create the table for subset SUm DP  ; 
	    
	    bool dp[n+1][sum+1] ;
	    
	    
	    //initialization
	    for(int j=0 ; j<sum+1 ;j++)
	        dp[0][j] = false; 
	    
	    for(int i=0;i<n+1;i++)
	        dp[i][0] = true ;
	        
	    
	    for(int i=1 ;i<n+1;i++){
	        for(int j=1;j<sum+1;j++){
	            
	            if(arr[i-1]<=j)
	                dp[i][j] = dp[i-1][j-arr[i-1]] or dp[i-1][j] ; 
	            else
	                dp[i][j] = dp[i-1][j] ; 
	        }
	    }
	    
	    //initializing a variable to store minimum difference from last  row and store possible sums till range /2
	    int minima = INT_MAX ; 
	    for(int j=0 ;j<= sum/2 ;j++)
	    {
	        if(dp[n][j]==true) 
	            minima = min(minima , sum - 2*j) ;
	    }
	    return minima ; 
    }
};