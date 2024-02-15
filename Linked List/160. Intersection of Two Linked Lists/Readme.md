# 題目大意：
尋找兩個 linked list 的交集點。

# 解題過程：
* 【version 1】
  1. 兩個 list 一起指向下一個 node
  2. 當其中一個 list 到終點時，回到那個 list 最初始的 node，直到兩個 list 同時抵達終點（皆為 NULL，表示沒有交集 node）
     * 時間複雜度：O(M*N)，M 為 listA 的節點數，N 為 listB 的節點數
     * 空間複雜度：O(1)
* 【version 2】
  1. 計算兩個 linked list 的長度
  2. 從較長者開始往後指，直到長度與另一個相同
  3. 兩者長度相同後，開始一一比對
     * 時間複雜度：O(M+N)，M 為 listA 的節點數，N 為 listB 的節點數
     *  空間複雜度：O(1)

-----------
![image](https://github.com/00757129/Leetcode/assets/58520935/7870c6d3-082e-4c13-9b5e-e1e97cc8cd0a)
