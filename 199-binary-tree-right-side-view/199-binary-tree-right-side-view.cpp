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
    
    void rightview(TreeNode* root, int l, vector<int> &ds){
        if(root==NULL)
            return;
        
        if(l==ds.size())
            ds.push_back(root->val) ; 
        rightview(root->right,l+1,ds);
        rightview(root->left,l+1,ds) ; 
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res ; 
        
        rightview(root,0,res) ;
        return res;
    }
};