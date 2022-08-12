/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool search(TreeNode* root,TreeNode* p, vector<TreeNode*> &ds){
        
        if(root==NULL) 
            return false;
        
        ds.push_back(root) ;
        
        if(root == p)
            return true;
        
        if(search(root->left,p,ds) or search(root->right,p,ds))
            return true;
        
        ds.pop_back();
        return false; 
        
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> dp,dq ;
        search(root,p,dp) ;
        
        search(root,q,dq) ;
        
        TreeNode* ans = NULL ;
        for(int i=0 ; i<dp.size()&&i<dq.size();i++){
            if(dp[i]==dq[i])
                ans =  dp[i];
        }
        return ans ;
        
    }
};