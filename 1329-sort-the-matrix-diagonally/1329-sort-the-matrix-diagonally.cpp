class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size() ;
        int n = mat[0].size() ;
        
        for(int i=0;i<m;i++){
            
            priority_queue<int,vector<int>,greater<int>> pq ;
            for(int j=0,x=i;j<n && x<m ;x++,j++){
                pq.push(mat[x][j]) ;
            }
            
            for(int j=0,x=i;j<n && x<m ;x++,j++){
                mat[x][j] = pq.top() ;
                pq.pop() ;
            }
            
        }
        
        for(int j=1;j<n;j++){
            
            priority_queue<int,vector<int>,greater<int>> pq ;
            for(int y = j,i=0;y<n && i<m ;y++,i++){
                pq.push(mat[i][y]) ;
            }
            
            for(int y = j,i=0;y<n && i<m ;y++,i++){
                mat[i][y] = pq.top() ;
                pq.pop() ;
            }
            
        }
       
    return mat;
    }
    
};