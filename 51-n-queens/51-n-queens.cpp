class Solution {
public:
    bool isSafe(int row,int col, vector<string> &board){
        int dupRow =row, dupCol=col;
        
        //checcking left col
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        col=dupCol; 
        //checking for lower diagonal 
        
        while(col>=0 and row<board.size()){
            if(board[row][col]=='Q') return false;
            col--; row++ ; 
        }
       
        col = dupCol ; row= dupRow ;
        //checking for upper diagonal  
        while(col>=0 and row>=0){
            if(board[row][col]=='Q') return false;
            col--; row-- ; 
        }
        return true; 
    }
    
    void solve(int col,vector<vector<string>> &res, vector<string> &board, int n){
        if(col==n){
            res.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board)){
                board[row][col]='Q';     //
                solve(col+1,res,board,n);  //calling recursion
                board[row][col]= '.';  //baccktrck
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res ; 
        vector<string> board(n) ; 
        string s(n,'.') ; 
        
        for(int i =0;i<n;i++){
            board[i] =s; 
        }
        
        solve(0,res,board,n);
        return res;
    }
};