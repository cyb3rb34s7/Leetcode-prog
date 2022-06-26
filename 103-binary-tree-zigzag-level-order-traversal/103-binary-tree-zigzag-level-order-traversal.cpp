 
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res ; 
        if(root==NULL) return res;
        queue<TreeNode*> q ; 
        q.push(root) ; 
        bool trigger=false; 
        while(!q.empty()){
            int cnt = q.size() ; 
            
            vector<int> temp(cnt) ; 
            for(int i=0;i<cnt;i++){
                TreeNode* curr = q.front(); 
                q.pop(); 
                int ind = (trigger) ? cnt-1-i : i ;
            
                 temp[ind] = curr->val ; 
                
                if(curr->left) q.push(curr->left) ;
                if(curr->right) q.push(curr->right) ; 
                    
            }
            
            res.push_back(temp) ;
            trigger = !trigger ; 
        }
        return res ; 
        
    }
};