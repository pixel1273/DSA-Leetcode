class Solution {
public:
    void sum(TreeNode* root,vector<int>& v,int targetSum,vector<vector<int>>& ans){
        if(root==NULL) return;
         v.push_back(root->val);
        if(root->left==NULL && root->right==NULL && root->val==targetSum){       
            ans.push_back(v);         
        }
        else {
        sum(root->left,v,targetSum-root->val,ans);
        sum(root->right,v,targetSum-root->val,ans);
        }
       v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v;
        sum(root,v,targetSum,ans);
    return ans;
    }
};
