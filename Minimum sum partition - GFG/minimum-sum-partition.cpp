// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // fidn arr sum 
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
	    
	    //initializing a vector to store last row and store possible sums till range /2
	    int minima = INT_MAX ; 
	    for(int j=0 ;j<= sum/2 ;j++)
	    {
	        if(dp[n][j]==true) 
	            minima = min(minima , sum - 2*j) ;
	    }
	    return minima ; 
	  
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends