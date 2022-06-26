
class Solution {
public:
   
    int height(TreeNode* root){
        if(!root)
            return 0;
        
        int lh= height(root->left);
        int rh = height(root->right) ; 
        if(lh==-1 or rh==-1 or abs(lh-rh)>1)
            return -1;
        return max(lh,rh)+1 ; 
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        return height(root)!=-1;
        
    }
};