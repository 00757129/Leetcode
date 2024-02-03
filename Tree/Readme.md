```
    4
   / \
  2   6
 / \ / \
1  3 5  7
```
### 則三種遍歷的順序依序為：

* 前序 (preorder): 中 -> 左 -> 右，4213657
* 中序 (inorder): 左 -> 中 -> 右，1234567。注意：對二元搜尋樹 (binary search tree, BST) 做 inorder traversal 就是由小到大依序遍歷。
* 後序 (postorder): 左 -> 右 -> 中，1325764
-------------------------------------------------
# Preorder Traversal 前序遍歷
Preorder traversal (前序遍歷) 需先拜訪父節點再拜訪左右子節點。利用 stack 實作，將 stack 頂端的值取出後，把左右子節點放進 stack，直到 stack 為空。
```
vector<int> preorderTraversal(TreeNode *root) {
  vector<int> res;
  if (!root) return res;

  stack<TreeNode*> s;
  s.push(root);
  while (s.size() > 0) {
    TreeNode *node = s.top();
    s.pop();
    res.push_back(node->val);
    if (node->right) s.push(node->right);
    if (node->left) s.push(node->left);
  }

  return res;
}
```

--------------------------------------------
# Inorder Traversal 中序遍歷
Inorder traversal (中序遍歷) 會先拜訪左子節點，再拜訪父節點，最後拜訪右子節點。我們需要盡量往左子節點前進，而途中經過的父節點們就先存在一個 stack 裡面，等到沒有更多左子節點時，就把 stack 中的父節點取出並拜訪其右子節點。
```
vector<int> inorderTraversal(TreeNode* root) {
  vector<int> res;
  if (!root) return res;

  stack<TreeNode *> s;
  TreeNode *cur = root;
  while (cur || !s.empty()) {
    if (cur) {
      s.push(cur);
      cur = cur->left;
    } else {
      TreeNode *node = s.top();
      s.pop();
      res.push_back(node->val);
      cur = node->right;
    }
  }

  return res;
}
```
------------------------------------------------------
# Postorder Traversal 後序遍歷
Postorder traversal (後序遍歷) 需先拜訪左右子節點，最後拜訪父節點。遍歷每個節點時，將父節點和左右子節點都放進 stack 中，並將父節點的左右子節點設為 NULL。當 stack pop 出一個節點沒有左右子節點時，表示他的左右子節點已經被拜訪過了，則可以拜訪父節點。
```
vector<int> inorderTraversal(TreeNode* root) {
  vector<int> res;
  if (!root) return res;

  stack<TreeNode *> s;
  s.push(root);

  while (s.size()) {
    TreeNode *node = s.top();
    if (!node->left && !node->right) {
      s.pop();
      res.push_back(node->val);
    }

    if (node->right) {
      s.push(node->right);
      node->right = NULL;
    }

    if (node->left) {
      s.push(node->left);
      node->left = NULL;
    }
  }

  return res;
}
```
