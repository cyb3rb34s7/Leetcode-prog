/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode* root,vector<int> &ds){
        if(!root)
            return ;

        ds.push_back(root->val) ; 
        preorder(root->left,ds) ; 
        preorder(root->right,ds) ; 
    }
    void flatten(TreeNode* root) {
        vector<int> ds ; 
        
        preorder(root,ds) ; 
        int i=1 ; 
        while(i<ds.size()){
            if(root->right)
                {root->right->val = ds[i] ;
                 root->left=NULL ; 
                 i++ ; 
                 root=root->right ; 
                }
            else
            {
                TreeNode* temp =new TreeNode(ds[i]) ; 
                root->left = NULL ; 
                root->right = temp ;
                root= root->right ; 
                i++ ;
            }
        }
        
    }
};