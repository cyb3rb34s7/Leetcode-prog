
class Solution {
public:
    int diameter(TreeNode* root,int &height){
        if(root==NULL)
            return 0;
        int lh=diameter(root->left,height);
        int rh = diameter(root->right,height) ;
        height = max(height,lh+rh) ; 
        return max(lh,rh) +1 ;  
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int height = 0 ;
        diameter(root,height);
        return height;
        
    }
    
};