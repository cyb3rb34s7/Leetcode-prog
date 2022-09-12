class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat[0].size() ;
        int n=mat.size() ; 
        vector<int> answer;
        map<int,vector<int>>mp ; 
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                mp[i+j].push_back(mat[i][j]); 
        // cout << "HW+E\n";
        bool rev = true;
        for(auto it : mp){
            vector<int> crr = it.second;
            // for(int i : crr)
            //     cout << i << " ";
            // cout << endl;
            if(rev)
                reverse(crr.begin(),crr.end());
            rev = !rev;
            for(int i : crr)
                answer.push_back(i);
        }
        return answer ;
        
    }
};