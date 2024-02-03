/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #define LEN 0xff
 void fun(struct TreeNode* root,int* res,int* index){
     if(root==NULL)return;

     fun(root->left,res,index);
     res[(*index)++]=root->val;
     fun(root->right,res,index);
 }

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* res=malloc(sizeof(int)*LEN);
    *returnSize=0;
    fun(root,res,returnSize);
    
    return res;
}
