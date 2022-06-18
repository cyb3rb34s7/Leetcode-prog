// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void solve(int row,int col,vector<vector<int>> &m, vector<string> &ans, vector<vector<int>> &freq, int n,string move){
        
        if(row==n-1 and col== n-1)
        {
            ans.push_back(move);
            return ; 
        }
        //down 
        
        if(row+1<n && freq[row+1][col]!=1 && m[row+1][col]!=0){
            freq[row][col]=1;
           
            solve(row+1,col,m,ans,freq,n,move+'D') ;
            freq[row][col]=0;
        }
        //left
        if(col-1>=0 && freq[row][col-1]!=1 && m[row][col-1]!=0){
            freq[row][col]=1;
            
            solve(row,col-1,m,ans,freq,n,move+'L') ;
            freq[row][col]=0;
        }
        //right
        if(col+1<n && freq[row][col+1]!=1 && m[row][col+1]!=0){
            freq[row][col]=1;
         
            solve(row,col+1,m,ans,freq,n,move+'R' ) ;
            freq[row][col]=0;
        }
        //up
        if(row-1>=0 && freq[row-1][col]!=1 && m[row-1][col]!=0){
            freq[row][col]=1;
            
            solve(row-1,col,m,ans,freq,n,move+'U') ;
            freq[row][col]=0;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans ; 
        vector<vector<int>> freq (n,vector<int> (n,0));
        
        if(m[0][0]==1)
            solve(0,0,m,ans,freq,n,"") ; 
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends