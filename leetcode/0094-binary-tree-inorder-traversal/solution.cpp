
class Solution {
public:
    void inOrder(vector<int>& v,TreeNode* root){
        if(root==NULL) return;
        inOrder(v,root->left);
        v.push_back(root->val);
        inOrder(v,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inOrder(v,root);
        return v;   
    }
};
