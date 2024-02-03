# 題目大意：
找出二元樹的 Inorder Traversal 順序

# 解題過程：
將測資視為很多小樹組成的樹，以遞迴的方式去找每棵小樹的 Inorder 順序
```
--- Hint ---
Inorder Traversal 順序為 左節點 -> 父節點 -> 右節點
```
--------------------------
* 時間複雜度：O(N)，N 為樹的節點數量
* 空間複雜度：O(N)
  
![image](https://github.com/00757129/Leetcode/assets/58520935/e4ce2f19-9e90-4622-b503-77e9bdcddd4f)
![image](https://github.com/00757129/Leetcode/assets/58520935/4da6e3d2-1814-464d-8c9b-eb321c367ae5)
