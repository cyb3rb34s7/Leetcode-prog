class Solution {
public:
    void gameOfLife(vector<vector<int>>& copy) {
        int m= copy.size() ,n= copy[0].size() ; 
        
        vector<vector<int>> board = copy ;
        
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int cnt = 0  ;
                
                if(i<m-1 and board[i+1][j] == 1)
                    cnt++ ; 
                if(i>0 and board[i-1][j]==1)
                    cnt ++ ;
                if(j<n-1 and board[i][j+1]==1) cnt++;
                if(j>0 and board[i][j-1]==1) cnt++ ;
                
                if(i>0 and j>0 and board[i-1][j-1]==1) cnt++ ;
                if(i>0 and j<n-1 and board[i-1][j+1]==1) cnt++ ;
                if(i<m-1 and j>0 and board[i+1][j-1]==1) cnt++ ;
                if(i<m-1 and j<n-1 and board[i+1][j+1]==1) cnt++ ;
                
                
                
                if(board[i][j]==1){
                    if(cnt<2)
                        copy[i][j] = 0;
                    else if(cnt==2 or cnt==3)
                        copy[i][j] = 1 ;
                    else if(cnt>3)
                        copy[i][j] = 0 ;
                }
                else
                {
                    if(cnt==3)
                        copy[i][j] = 1 ;
                }
                
                
                
            }
        }
        
    }
};