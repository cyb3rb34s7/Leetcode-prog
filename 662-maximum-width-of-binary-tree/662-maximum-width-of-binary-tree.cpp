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
    int widthOfBinaryTree(TreeNode* root) {
        int res = 0  ;
        queue<pair<TreeNode*,int>> q; 
        q.push({root,0}) ; 
        
        while(!q.empty()){
            int left = q.front().second ; 
            int right = q.back().second ; 
            int count = q.size(); 
            res = max(res,right-left+1) ; 
            for(int i=0;i<count;i++){
                auto it = q.front() ; 
                q.pop();
                TreeNode* curr = it.first ; 
                int modified_ind = it.second-left ;
                
                if(curr->left) q.push({curr->left,(long long)2*modified_ind+1}) ; 
                if(curr->right) q.push({curr->right,(long long)2*modified_ind+2}) ;
            }
        }
        return res ; 
            
    }
};