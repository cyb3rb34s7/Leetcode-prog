class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q ; 
        
        int m = grid.size() ,n = grid[0].size() ;
        
        int mins = 0 , total = 0, cnt = 0 ; 
        
        int dx[4] = {0,0,1,-1} ;
        int dy[4] = {1,-1,0,0} ; 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                if(grid[i][j]!=0) total++ ;
                
                if(grid[i][j]==2) q.push({i,j}) ;
            }
        }
        
        while(q.empty()==false){
           
            int k = q.size() ; 
            cnt+=k ; 
            
            while(k--){
                 int x = q.front().first ,y =q.front().second ;
                q.pop() ;
                
                for(int i=0;i<4;i++){
                    int nx = x + dx[i] ,ny = y + dy[i] ;
                    
                    if(nx<0 || nx>=m || ny<0 || ny>=n || grid[nx][ny]!= 1) continue;
                    
                    grid[nx][ny] = 2 ; 
                    
                    q.push({nx,ny}) ;
                }
                
            }
            if(!q.empty()) mins++ ;
        }
        mins= (cnt==total) ? mins :-1 ;
        
        return mins;
    }
};