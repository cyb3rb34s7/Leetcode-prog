class Solution {
public:
    int m,n ;
    
    void dfs(int i,int j , vector<vector<char>> &grid){
        if(i>=m or j>=n or i<0 or j<0 or grid[i][j]!='1'){
            return;
        }
        grid[i][j] ='2' ;
        
        
        dfs(i+1,j,grid); 
        dfs(i-1,j,grid) ;
        dfs(i,j-1,grid) ;
        
        dfs(i,j+1,grid) ;
        
        
        
    }
    int numIslands(vector<vector<char>>& grid) {
         m = grid.size() ; 
         n = grid[0].size() ;
        int res = 0 ; 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                if(grid[i][j]=='1')
                {
                    dfs(i,j,grid) ;
                    res++;
                }
                
            }
        }
        return res ; 
    }
};