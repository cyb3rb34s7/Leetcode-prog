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
    bool search(TreeNode* root, vector<TreeNode*>&ds, TreeNode* p){
        if(root==NULL)
            return false;
        ds.push_back(root);
        if(root==p)
            return true;
        
        if(search(root->left,ds,p) or search(root->right,ds,p))
            return true;
        ds.pop_back() ; 
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> ds1 ,ds2 ; 
        search(root,ds1,p);
        search(root,ds2,q) ;
        TreeNode* res  ; 
        int n1= ds1.size() , n2=ds2.size() ; 
        for(int i=0,j=0 ; i<n1 and j<n2 ; i++,j++ ){
            if(ds1[i]==ds2[j])
                res = ds1[i];
        }
        return res;
        
        
    }
};