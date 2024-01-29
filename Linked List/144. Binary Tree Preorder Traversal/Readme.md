# 題目大意：
給予一棵 tree，並回傳其 Preorder Traversal 的值。

# 解題過程：
* 【version 1】Recursive
依序將 root、PreorderTraversal(left)、PreorderTraversal(right) 的 vector 插入 ans 後方。
* 【version 2】Iterative
以一個 vector 記錄經過的節點，並不斷檢查 vector 中第一個節點，並尋找此節點之左子樹及右子樹，插入 vector 的最前方。



-------------------------
![image](https://github.com/00757129/Leetcode/assets/58520935/baf342ca-e3c9-4df9-933c-496bfcb4f581)
![image](https://github.com/00757129/Leetcode/assets/58520935/8c9c015b-8032-4c56-9b4d-b572604bc863)


