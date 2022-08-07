class Solution {
public:
    bool isCyclic(vector<vector<int>> &adj, vector<int> &vis, int ind){
        //if we get processing node again we know its cyclic
        if(vis[ind]==2)
            return true;
        vis[ind] = 2 ;
        for(int j=0;j<adj[ind].size();j++){
            //skipping processed nodes 
            if(vis[adj[ind][j]]!=1){
                if(isCyclic(adj,vis,adj[ind][j]))
                    return true;
            }
        }
        //we come out of this loop , meaning we havent found anything cyclic in any nodes connected to ind
        //so we mark it as processed 
        vis[ind] = 1 ;
        //then we return false indicating no cycle was found 
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& p) {
        int m = p.size() ; 
        
        vector<vector<int>> adj(n) ; 
        //creating graph connecting connections
        for(int i=0;i<m;i++){
           adj[p[i][0]].push_back(p[i][1]) ; 
        }
        //three states 0 = unvisited, 1 = visited,2 = processing ;
        vector<int> vis(n,0);
        
        for(int i=0;i<n;i++){
            
            if(vis[i]==0)
                if(isCyclic(adj,vis,i))
                    return false ;
        }
        return true;
    }
};