# 題目大意：
判斷測資所給的樹是不是 balanced BT。

# 解題過程：
* 【version 1】
    以 maxDepth() 去計算左子樹及右子樹的最大高度，回傳給主程式後，再進行比較。
    * 時間複雜度：O(N logN)，N 為 tree 的節點數
    * 空間複雜度：O(N logN)，遞迴產生的記憶體 (?)
* 【version 2】
    以 maxDepth() 去計算左子樹及右子樹的最大高度，計算的過程中會順便檢查是否平衡。
    * 時間複雜度：O(N)，N 為 tree 的節點數
    * 空間複雜度：O(N)
  ------------
![image](https://github.com/00757129/Leetcode/assets/58520935/88fa341a-d1d7-4b40-a8d0-400046328c4c)
