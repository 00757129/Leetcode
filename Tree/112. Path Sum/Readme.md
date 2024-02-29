# 題目大意：
檢查測資中是否有從 root 到 leaf 相加為 targetSum 的路徑。

# 解題過程：
以遞迴方式不斷呼叫 hasPathSum(子樹, 剩餘 sum)

--------------
* 時間複雜度：O(N)，N 為 tree 之節點數
* 空間複雜度：O(N)
* ![image](https://github.com/00757129/Leetcode/assets/58520935/82ae42ef-7bd4-44fc-9373-df9be7c4d9c9)
