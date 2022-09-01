class Solution {
public:
    int m,n ;
    void dfs(int i,int j,vector<vector<char>>&board){
        if(i>=m or i<0 or j>=n or j<0 or board[i][j]!='O')
            return  ;
        board[i][j] = '#' ;
        
        dfs(i+1,j,board);
        dfs(i-1,j,board);
        dfs(i,j+1,board);
        dfs(i,j-1,board);
        
    }
    void solve(vector<vector<char>>& board) {
     
         m =board.size() ;
         n = board[0].size() ;
        
        for(int i=0;i<m;i++){
            
            if(board[i][0]=='O')
                dfs(i,0,board) ;
            if(board[i][n-1]=='O')
                dfs(i,n-1,board) ;
        }
        
        for(int j=0;j<n;j++){
            if(board[0][j]=='O')
                dfs(0,j,board) ;
            if(board[m-1][j]=='O')
                dfs(m-1,j,board) ;
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='#')
                    board[i][j] = 'O' ;
                else
                    board[i][j] = 'X' ;
            }
        }
    }
};