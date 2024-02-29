/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int targetSum) {
    if(root==NULL)return false;
    if(root->right==NULL && root->left==NULL &&root->val==targetSum)return true;
    else {
        return hasPathSum(root->right,targetSum-root->val)||hasPathSum(root->left,targetSum-root->val);
    }
}
