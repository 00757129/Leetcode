# 題目大意：
檢查測資所給的兩棵 binary tree 之值與結構是否完全相同。

# 解題過程：
將兩個測資視為很多小樹組成的樹，以遞迴的方式去檢查兩棵是否相同
（檢查順序：Preorder Traversal — root、left node、right node）
-----------------
* 時間複雜度：O(M+N)，M 為 Tree p 之節點數，N 為 Tree q之節點數
* 空間複雜度：O(M+N)
--------------
![image](https://github.com/00757129/Leetcode/assets/58520935/999c9966-3e01-4561-81f6-5d7e39dc6fbe)
