class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int m = a.size() ,
            n= a[0].size() ; 
        
        if(target>a[m-1][n-1] || target<a[0][0])
            return false;
        
        int i=0,j=n-1;
        while(i<m && j>=0){
            if(target>a[i][j])
                i++;
            else if(target < a[i][j])
                j--;
            else
                return true;
        }
        return false;
    }
};