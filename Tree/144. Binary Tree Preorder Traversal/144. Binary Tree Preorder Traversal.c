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
void Visit(struct TreeNode* root,int* result,int* index){
    if(root==NULL)return;
    result[(*index)++]=root->val;
    Visit(root->left,result,index);
    Visit(root->right,result,index);

}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    
   *returnSize=0;
   int* result=malloc(sizeof(int)*1024);
    Visit(root,result,returnSize);
   return result;
}
