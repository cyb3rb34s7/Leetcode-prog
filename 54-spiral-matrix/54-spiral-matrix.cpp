class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int m=a.size() ,n=a[0].size() ; 
        
        int startRow=0,startCol = 0 ,endRow = m-1,endCol = n-1 ;
        vector<int> res ; 
        while(startRow<=endRow and startCol<=endCol){
            
            //print first row 
            
            for(int j=startCol ;j<=endCol;j++){
                res.push_back(a[startRow][j]) ;
            }
            startRow++ ; // moving to next row 
            if(startRow>endRow) break;
            //print last column
            for(int i=startRow;i<=endRow;i++){
                res.push_back(a[i][endCol]) ;
            }
            endCol-- ;
            if(endCol<startCol) break;
            for(int j=endCol;j>=startCol;j--){
                res.push_back(a[endRow][j]) ;
            }
            endRow--;
            if(startRow>endRow) break;
            for(int i=endRow;i>=startRow;i--){
                res.push_back(a[i][startCol]) ;
            }
            startCol++ ;
            
            if(endCol<startCol) break;
        }
        
        
    return res;    
    }
};