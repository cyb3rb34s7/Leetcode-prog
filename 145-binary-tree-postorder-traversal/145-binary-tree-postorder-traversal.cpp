
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> res; 
        if(!root) return res ;
        
        stack<TreeNode*> st ; 
        st.push(root) ;
        while(!st.empty()){
            TreeNode*  t =  st.top();
            st.pop();
            
            res.push_back(t->val) ;
            if(t->left) st.push(t->left) ;
            if(t->right) st.push(t->right) ;
        }
        reverse(res.begin(),res.end()) ;
        
        return res ; 
        
    }
};