# 題目大意：
給予一組 Linked List，檢查是否出現迴圈。

# 解題過程：

使用一個移動較快的 pointer（一次走兩步），與原先的 pointer（一次一步）做比較，直到較快者抵達終點（沒有 cycle）或與原先的 pointer 相同（有 cycle），就可得到答案。

----------------
* 時間複雜度：O(N)，N 為 linked list 的節點數
* 空間複雜度：O(1)
---------------
![image](https://github.com/00757129/Leetcode/assets/58520935/1ec313d7-6316-4a4d-9893-528d66aa0213)


