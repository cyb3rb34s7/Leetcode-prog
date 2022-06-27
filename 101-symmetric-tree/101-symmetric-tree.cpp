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
    bool Symm(TreeNode* p, TreeNode* q) {
        if(p==NULL and q==NULL)
            return true; 
        
        else if(p==NULL or q==NULL or p->val!=q->val)
            return false;
        
        return Symm(p->left,q->right) and Symm(p->right,q->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true; 
        return Symm(root->left,root->right) ;
    }
};