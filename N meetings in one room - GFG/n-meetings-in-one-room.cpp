// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:

    int maxMeetings(int start[], int end[], int n)
    {
    vector<vector<int>> meetings  ;
    
    for(int i =0;i<n;i++){
        vector<int> block(2) ;
        block[0]=end[i] ;
        block[1]=start[i];
        meetings.push_back(block) ;
    }
    sort(meetings.begin(),meetings.end()) ;
    
    int count =1 ; 
    int endt = meetings[0][0] ; 
    for(int i=1;i<n;i++){
        if(meetings[i][1]>endt){
            count++;
            endt=meetings[i][0];
        }
    }
    return count;
    
    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends