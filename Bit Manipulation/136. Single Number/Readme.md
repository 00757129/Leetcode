# 題目大意：
給予一組測資，找出只出現一次的整數。

# 解題過程：
* 【version 1】
  1. 透過迴圈及 unordered_map<int,int> 記錄 nums 中每個數出現幾次
  2. 再以一個迴圈找出 value ==1 的 key 為解答
* 【version 2】XOR
透過 XOR 的方式，來變相計算數字以 2 進位方式呈現時各位元的 0 或 1 出現次數，最終那個位元的 0 或 1 加總次數為奇數的位數即為 1，再將結果轉換為 10 進位

--------------
* 時間複雜度：O(N)，N 為 nums.size()
* 空間複雜度：O(1)
-------------
![image](https://github.com/00757129/Leetcode/assets/58520935/5561aafe-df4c-4581-a4a6-61dc52ee57bd)
