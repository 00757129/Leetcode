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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        vector<int> tmp; 
        if(root==NULL)return ans;
        if(root->left!=NULL){
            tmp=inorderTraversal(root->left);
            ans.insert(ans.end(),tmp.begin(),tmp.end());
        }
        ans.push_back(root->val);
        if(root->right!=NULL){
            tmp=inorderTraversal(root->right);
            ans.insert(ans.end(),tmp.begin(),tmp.end());
        }
        return ans;



    }
};
