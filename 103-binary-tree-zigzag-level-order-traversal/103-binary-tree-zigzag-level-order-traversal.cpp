 
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
            
            vector<int> temp ; 
            for(int i=0;i<cnt;i++){
                TreeNode* curr = q.front(); 
                q.pop(); 
                
            
                 temp.push_back(curr->val) ;
                
                if(curr->left) q.push(curr->left) ;
                if(curr->right) q.push(curr->right) ; 
                    
            }
            if(trigger) reverse(temp.begin(),temp.end()) ;
            res.push_back(temp) ;
            trigger = !trigger ; 
        }
        return res ; 
        
    }
};