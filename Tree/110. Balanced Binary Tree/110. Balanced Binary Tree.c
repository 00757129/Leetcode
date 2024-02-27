/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int MaxDepth(struct TreeNode* root){
    if(root==NULL)return 0;
    int left=MaxDepth(root->left);
    int right=MaxDepth(root->right);
    return (left>right)?left+1:right+1;

}

bool isBalanced(struct TreeNode* root) {
    if(root==NULL)return true;
    int left=MaxDepth(root->left);
    int right=MaxDepth(root->right);
    if(abs(left-right)>1)return false;
    return isBalanced(root->left)&&isBalanced(root->right);
    
}
