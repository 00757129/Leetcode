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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)return ans;
        vector<TreeNode*> list;
        list.push_back(root);
        
        
        while(!list.empty()){
            int pos=0;
            TreeNode* tmp=list.front();
            list.erase(list.begin());
            ans.push_back(tmp->val);
            if(tmp->left!=NULL){
                list.insert(list.begin(),tmp->left);
                pos++;
            }
            if(tmp->right!=NULL){
                list.insert(list.begin()+pos,tmp->right);
            }
        }
        return ans;
    }
};
