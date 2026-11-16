
class Solution {
public:
    void preOrder(vector<int>& v,TreeNode* root){
        if(root==NULL) return;
        v.push_back(root->val);
        preOrder(v,root->left);
        preOrder(v,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        preOrder(v,root);
        return v;    
    }
};
