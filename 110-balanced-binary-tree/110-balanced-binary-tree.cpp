
class Solution {
public:
    int height(TreeNode* root){
        if(!root)
            return 0;
        int lh= height(root->left);
        int rh = height(root->right) ; 
        
        return max(lh,rh)+1 ; 
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int lh = height(root->left) ; 
        int rh = height(root->right) ; 
        if(abs(lh-rh)>1)
            return false;
        else
            return isBalanced(root->left) and isBalanced(root->right) ; 
        
        
    }
};