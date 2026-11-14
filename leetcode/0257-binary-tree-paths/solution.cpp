class Solution {
public:
    void helper(TreeNode* root,string s,vector<string>& ans){
       if(root==NULL){
        return;
       } 
       s+=to_string(root->val);
       if(root->left==NULL && root->right==NULL){
        ans.push_back(s);
        return;
       }
       s+="->";
       helper(root->left,s,ans);
        helper(root->right,s,ans); 
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root,"",ans);
        return ans;
    }
};
