
class Solution {
public:
    int levels(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1 + max(levels(root->left),levels(root->right));
    }

  void nthlevel(vector<int>& v,TreeNode* root,int i,int curr){
        if(root==NULL) return;
        if(curr==i){
            v.push_back(root->val);
            return;
        }
        nthlevel(v,root->left,i,curr+1);
        nthlevel(v,root->right,i,curr+1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n=levels(root);
        vector<vector<int>> ans;
        for(int i=1;i<=n;i++){
           vector<int> v;
           nthlevel(v,root,i,1);
           ans.push_back(v);
        }    
        return ans;
    }
};
