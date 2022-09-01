class Solution {
public:
    int m,n ;
    bool go(int i, int j , int k, string word , vector<vector<char>>& board){
        
        if(k==word.size())
            return true;
        
        if(i<0 or i>=m or j<0 or j>=n or word[k]!=board[i][j])
            return false;
        board[i][j] = '.' ; 
        
        bool res = go(i+1,j,k+1,word,board) ||
                    go(i-1,j,k+1,word,board) ||
                    go(i,j+1,k+1,word,board) ||
                    go(i,j-1,k+1,word,board) ; 
        
        board[i][j] = word[k] ;
        return res ; 
                
    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size() , n = board[0].size() ; 
        
        
        for(int i = 0 ; i < m; i++){
            for(int j = 0 ; j < n ; j++){
                if(board[i][j] == word[0] and go(i ,j ,0 ,word ,board))
                    return true ;
            }
        }
        return false; 
        
    }
};