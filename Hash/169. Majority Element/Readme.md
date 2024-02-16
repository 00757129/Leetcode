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
* 【version 3】
  1. Boyer–Moore majority vote algorithm(摩爾投票算法)

     刪去數列中兩個不同的數字，不會影響該數列的majority element。
  3. 如果和ans相等，則將count+1；
     
      如果和ans不同，且count>0時，將count-1；(取這兩個數成對移除)

       如果和ans不同但是count=0時，將ans更改為nums[i]並將count+1。(代表ans已經用完了，現在還沒被移除的是nums[i])
