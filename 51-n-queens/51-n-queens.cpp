class Solution {
public:
    void solve(int col,vector<vector<string>> &res, vector<string> &board, vector<int> &leftcheck, vector<int> &uppercheck, vector<int> &lowercheck ){
        int n =board.size();
        if(col==n){
            res.push_back(board);
            return;
        }
        
        for(int row=0; row<board.size();row++){
            if(leftcheck[row]==0 && uppercheck[n-1+col-row]==0 && lowercheck[col+row]==0){
                board[row][col]='Q' ; 
                leftcheck[row]=1 ; 
                uppercheck[n-1+col-row]=1;  
                lowercheck[col+row]=1;
                solve(col+1,res,board,leftcheck,uppercheck,lowercheck);
                board[row][col]='.' ; 
                leftcheck[row]=0 ; 
                uppercheck[n-1+col-row]=0;  
                lowercheck[col+row]=0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res ; 
        vector<string> board(n) ; 
        string s(n,'.') ; 
        for(int i =0;i<n;i++)
            board[i]=s;
        
        vector<int> leftcheck(n,0), uppercheck(2*n-1,0),lowercheck(2*n-1,0) ;
        solve(0,res,board,leftcheck,uppercheck,lowercheck);
        
        return res;
    }
};