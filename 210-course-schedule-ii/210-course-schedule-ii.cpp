class Solution {
public:
    vector<int> res ; 
    bool isCyclic(vector<vector<int>> &adj, vector<int> &vis, int ind){
        
        if(vis[ind]==2)
            return true;
        
        vis[ind]=2 ;
        
        for(int j=0; j < adj[ind].size() ;j++){
            if(vis[adj[ind][j]]!=1)
                if(isCyclic(adj,vis,adj[ind][j]))
                    return true;
        }
        
        vis[ind] = 1; 
        res.push_back(ind) ;
        return false;
    }
    vector<int> findOrder(int n, vector<vector<int>>& p) {
      int m = p.size() ; 
        
        vector<vector<int>> adj(n) ;
        
        for(int i=0;i<m;i++){
            adj[p[i][0]].push_back(p[i][1]) ;
        }
        
        vector<int> vis(n,0) ; 
        bool ans=true ;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                if(isCyclic(adj,vis,i))
                    ans = false;
            }
        }
         if(ans) return res; 
        else return {} ;
    }
};