class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m  = matrix.size() ; 
        int n = matrix[0].size() ; 
        
        for(int i=0;i<m;i++){
            if(n==1 && matrix[i][0]==target)return true;
            if(matrix[i][0]<=target and matrix[i][n-1]>=target){
                int low= 0 ,hi = n-1 ;
                
                while(low<=hi){
                    int mid = low+ (hi-low)/2 ; 
                    if(target==matrix[i][mid]) return true ; 
                    
                    else if(target<matrix[i][mid]) hi = mid-1  ;
                    else
                        low = mid + 1;
                }
            }
            
        }
        return false;
    }
};