## 題目:
給定一個整數集合 nums 以及一個整數 target。我們可以從這個集合中，找到某兩個數加總起來剛好為 target。

假設 nums 為 [2, 7, 11, 15]、target 為 9。從 nums 中可以找到 2 和 7 這兩個數加起來為 target（即 9）。

根據題目的定義，只會剛好找到這兩個數字加總為 target（意思是說，除了 2 和 7 這兩個數字外，我們從數列中找不到其他任何數字加總起來也會為 9）。

而題目要我們做的事情就是 —— 從集合中，找到那兩個加總為 target 的數字，並回傳它們所在的 index。例如 2 和 7 分別是在 index 0 和 index 1 的位置，那我們要回傳的答案就是 [0, 1]。


## Hash Table 
一種資料結構，透過 Key 去映射（Map）到某個 Value 的結構。

Insert 某筆資料 : 透過 Hash Function 去計算出對應的某個位置，並將要儲存的資料放在那個位置

Lookup 某筆資料 : 透過 Hash Function 來找到某筆資料存放的位置。

理想上 Insert 及 Lookup 的時間複雜度皆為 O(1)。

# 解題思路

1.宣告 Hash Table 用來儲存我們每次看到的數字

2.使用 for 迴圈來遍歷每一個數字來找尋的目標
  如同前面所提及，假使目前數字是 2，那要找的目標即為 num_to_find = target - 2（因為這樣才能使得 num_to_find + 2 = target）。

3.假設Hash Table 中不存在 num_to_find，代表該數字可能不存在或是目前還未出現。
因此我們先把它存起來。以該數字作為 Key、並以其所在的 Index 作為 Value 存起來，即 discovered[ num[i] ] = i

4.如果在 Hash Table 裡面存在 num_to_find 的話，就代表 num_to_find是之前查看過（存在於 nums）的數字。因此我們就可以回傳 num_to_find 的 Index 及當前數字的 Index。
