# 題目大意：

依據測資所給之列數，回傳 Pascal 三角形第 rowIndex 行的數值。

# 解題過程：

1. 以 for 迴圈建立每一列 vector

2. 內部再以 for 迴圈計算 vector 中每一個值


時間複雜度：O(N²)，N 為 rowIndex
空間複雜度：O(N)

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal’s Triangle II.
Memory Usage: 6.4 MB, less than 80.75% of C++ online submissions for Pascal’s Triangle II.
