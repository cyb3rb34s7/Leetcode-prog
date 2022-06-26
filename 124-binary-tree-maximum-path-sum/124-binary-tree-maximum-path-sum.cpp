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
    int pathSum(TreeNode* root, int &res){
        if(root==NULL)
            return 0;
        
        int left = max(0,pathSum(root->left,res)) ; 
        int right = max(0,pathSum(root->right,res)) ;
        
        res = max(res,left+right+root->val) ; 
        //to get the child best path
        return root->val + max(left,right) ; 
    }
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN ; 
        pathSum(root,res) ; 
        return res;
    }
};