# 題目大意：
找尋 vector 中出現超過一半以上的數為何。

# 解題過程：
* 【version 1】
  1. 用資料結構 set 找出 nums 中出現的數
  2. 迭代所有 set 中的數，透過 count 語法找出它在 nums 中出現的次數，若超過半數，則 return 答案
  *  時間複雜度：O(N²)，N 為 nums.size()

     空間複雜度：O(N)
* 【version 2】
  1. 排序 nums
  2. 回傳中間的數
  * 時間複雜度：O(N logN)，N 為 nums.size()

    空間複雜度：O(1)
