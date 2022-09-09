class Solution {
public:
     static bool comp(vector<int> &a, vector<int> &b)
     {
          if (a[0] == b[0])
          {
               return a[1] > b[1];
          }
          return a[0] < b[0];
     }
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        int n= p.size() ;
        
        sort(p.begin(),p.end(),comp) ;
        
        int cnt = 0 ;
        pair<int,int> last = {p[n-1][0],p[n-1][1]}  ;
        for(int i=n-2;i>=0;i--){
            if(p[i][0] == last.first)
                {if(p[i][1]>last.second)
                    last = {p[i][0],p[i][1]}  ;
                
                 else
                     continue;
                }
            
            if(p[i][0]<last.first and p[i][1]<last.second)
                cnt++ ; 
            if(p[i][0]<last.first and p[i][1] > last.second)
                last = {p[i][0],p[i][1]} ; 
        }
        return cnt ; 
    }
};