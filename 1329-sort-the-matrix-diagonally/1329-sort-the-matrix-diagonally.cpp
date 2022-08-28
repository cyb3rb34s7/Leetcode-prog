class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size() ;
        int n = mat[0].size() ;
        int i =0 ;
        
        while(i<m){
            int x = i,j=0 ;
            priority_queue<int,vector<int>,greater<int>> pq ;
            
            while(x<m and j<n){
                
                pq.push(mat[x][j]) ;
                x++ ; j++ ;
            }
            
             x=i; j=0;
             while(x<m and j<n and !pq.empty()){
                mat[x][j] = pq.top() ; 
                
                x++ ; j++ ;
                 pq.pop();
            }
            i++ ;
            
        }
        int j = 1 ;
        while(j<n){
            
            int y = j,i=0 ;
            priority_queue<int,vector<int>,greater<int>> pq ;
            while(y<n and i<m){
                
                pq.push(mat[i][y]);
                
                i++ ; y++ ;
            }
            y = j ,i=0 ;
             while(y<n and i<m){
                mat[i][y] = pq.top();
                pq.pop() ;
                 i++ ; y++ ;
            }
            j++ ;
            
        }
        
       
    return mat;
    }
    
};