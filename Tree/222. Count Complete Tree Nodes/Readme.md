# 題目大意：
給定一個完全二元樹的根節點，返回樹中節點的數量。

# 解題過程：
利用二元樹和二元搜尋的特性結合起來。

由於樹是完整的，我們可以確定樹的深度（或高度），然後執行二元搜尋以找到最後一層的節點數量。

1. depth 函數：
通過簡單地沿著最左側的路徑遍歷，直到我們遇到一個空節點，來計算樹的深度（或高度）。這需要 O（h） 的時間，其中 h 是樹的高度。
2. exists 函數：
此函數檢查樹的最後一層上是否存在給定索引的節點。
該函數使用索引的二進制表示從根節點遍歷到所需節點。對於二進制表示中的每個位：
如果位是 0，則移動到左子節點。
如果位是 1，則移動到右子節點。
在此遍歷結束時，如果節點存在，則函數返回 true，否則返回 false。
3. countNodes 函數：
首先，如果樹為空，它立即返回 0。
然後計算樹的深度。
如果深度為 1（僅存在根），則返回 1。
對於深度大於 1 的樹，它執行二分查找來找到最後一層上最右邊節點的索引：
索引的搜索範圍從 0 到 2h−1，其中 h 是樹的深度減 1（因為我們僅對最後一層感興趣）。
使用 exists 函數，它檢查給定索引的節點是否存在。
如果節點存在於當前的中間索引，它調整搜索範圍為右半部分，否則調整為左半部分。
一旦二分查找完成，左指針指示了最後一層中節點的總數。
樹中節點的總數是前 h−1 層中節點的總數（即 2h−1−1）和最後一層中節點的數量的總和。