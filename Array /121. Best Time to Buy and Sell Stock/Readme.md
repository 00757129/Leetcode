題目大意：
給予一組關於每日股價的測資，計算出在某兩日買進賣出後的最高收益。


解題過程：
使用一個迴圈從最前面開始找買進的日子，不斷往後計算各日期賣出的價格，同時也更新最小的買進價格。

時間複雜度：O(N)，N 為測資 vector 之大小

空間複雜度：O(1)


![image](https://github.com/00757129/Leetcode/assets/58520935/1b5af409-86f3-46a9-9784-6559e344dafb)