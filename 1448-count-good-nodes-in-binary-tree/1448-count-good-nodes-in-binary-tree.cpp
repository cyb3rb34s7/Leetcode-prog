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
    int cnt = 0; 
    void dfs(TreeNode* root,int curr_max){
        
        if(root==NULL)
            return ; 
        if(root->val >= curr_max){
            cnt++; 
            curr_max = root->val ;
        } 
        
        if(root->left)
        {   int temp = curr_max ;
            dfs(root->left,curr_max) ; 
            curr_max = temp ; 
        }
        if(root->right){
            int temp = curr_max ;
            dfs(root->right,curr_max) ;
            curr_max = temp ; 
        }
            
    }
    int goodNodes(TreeNode* root) {
        
        dfs(root,root->val) ;
        return cnt ; 
    }
};