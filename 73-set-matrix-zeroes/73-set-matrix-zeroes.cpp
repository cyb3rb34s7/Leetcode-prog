class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size() ;
        int n= matrix[0].size() ;
        bool isCol =false, isRow =false ;
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0)
                {isCol = true ;
                    break;
                }
        }
        
        for(int j=0;j<n;j++){
            if(matrix[0][j]==0)
            {
                isRow = true; 
                break ;
            }
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0 ;
                    matrix[0][j] = 0 ;
                }
                
            }
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0 or matrix[0][j]==0)
                    matrix[i][j] = 0;
            }
        }
        if(isCol)
        {
            for(int i=0;i<m;i++){
                matrix[i][0] = 0;
            }
        }
        if(isRow)
        {
            for(int j=0;j<n;j++){
                matrix[0][j]=0 ;
            }
        }
        
    }
};