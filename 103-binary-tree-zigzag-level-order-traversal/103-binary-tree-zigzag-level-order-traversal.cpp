class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     vector<vector<int>> res ; 
        queue<TreeNode*> q ;
        if(!root)
            return res;
        q.push(root) ;
        
        bool rev= false ;
        while(!q.empty()){
            int n = q.size();
            vector<int>temp ;
            for(int i=0;i<n;i++){
                auto node = q.front() ;
                q.pop();
                
                temp.push_back(node->val) ;
                
                if(node->left) q.push(node->left) ;
                if(node->right) q.push(node->right) ;
            }
            if(rev)
                reverse(temp.begin(),temp.end()) ;
            res.push_back(temp) ;
            rev = 1-rev ;
        }
        return res ;    
    }
};