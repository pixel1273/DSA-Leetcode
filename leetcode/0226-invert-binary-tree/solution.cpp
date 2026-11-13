
class Solution {
public:
    void change(TreeNode* root){
        if(root==NULL) return;
        TreeNode* ch=root->left;
        root->left=root->right;
        root->right=ch;
        change(root->left);
        change(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        change(root);
        return root;
    }
};
