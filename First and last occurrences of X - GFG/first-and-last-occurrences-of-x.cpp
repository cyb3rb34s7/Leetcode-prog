// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
       int first = -1; 
       int last = -1 ; 
       int start = 0 , end = n-1 ; 
       while(start<=end){
           int mid = start  + (end-start)/2 ; 
           
           if(x==arr[mid])
            {last = mid ; 
                start =mid+1 ; 
            }
           else if(x>arr[mid])
            start=mid+1 ;
            else
            end=mid-1 ; 
       }
       if(last==-1)
       return {-1} ; 
       start = 0 ;end = n-1 ; 
       
       while(start<=end){
           int mid = start  + (end-start)/2 ; 
           
           if(x==arr[mid])
            {first = mid ;
             end=mid-1;    
            } 
           else if(x>arr[mid])
            start=mid+1 ;
            else
            end=mid-1 ; 
       }
       
       return {first,last} ; 
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends