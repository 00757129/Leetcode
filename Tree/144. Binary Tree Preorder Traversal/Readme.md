# 題目大意：
給予一棵 tree，並回傳其 Preorder Traversal 的值。

# 解題過程：
* 【version 1】Recursive
  依序將 root、PreorderTraversal(left)、PreorderTraversal(right) 的 vector 插入 ans 後方。
* 【version 2】Iterative
  以一個 vector 記錄經過的節點，並不斷檢查 vector 中第一個節點，並尋找此節點之左子樹及右子樹，插入 vector 的最前方。
---------------
* 時間複雜度：O(N)，N 為 tree 的節點數量
* 空間複雜度：O(N)
* ![image](https://github.com/00757129/Leetcode/assets/58520935/c7ebd45f-3fe6-467c-9b9b-4bc4772f2cc2)
