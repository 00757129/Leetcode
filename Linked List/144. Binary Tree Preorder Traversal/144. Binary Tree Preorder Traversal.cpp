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
void Visit(struct TreeNode* root,int* res ,int* index){
    if(root==NULL)return;
    res[(*index)++]=root->val;
    
    Visit(root->left,res,index);
    Visit(root->right,res,index);

}


int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize=0;
    int* res=malloc(sizeof(int)*1024);

    Visit(root,res,returnSize);
    return res;
}
