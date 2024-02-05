# 題目大意：
將兩個 sorted 的 linked list 合併為一個 sorted linked list。

# 解題過程：
1. 檢查 list1 及 list2 是否為空
2. 用一個 linked list 放置合併資料，並以 pointer 記錄初始記憶體位置
3. 接著以迴圈每次比較 list1 及 list2 值的大小，依序放到 linked list 中
4. 最後將剩餘的 list (因已排序) 資料直接放到 linked list 中
```
--- Hint ---
這題可以釐清 linked list 概念
ListNode* head; // 表示一個節點 pointer
head->val;      // 可以得到 head 的值
head->next;     // 指向下一個節點位置
【舉例】
head: [item0]->[item1]->[item2]-> ...
ListNode* ans = head; 
ans = ans->next; // 讓下一個位置變為現在的位置
head: [item0]->[item1]->[item2]-> ... // 不變
ans: [item1]->[item2]-> ...
```
-------
* 時間複雜度：O(M+N)，M 為 l1 長度，N 為 l2 長度
* 空間複雜度：O(M+N)
![image](https://github.com/00757129/Leetcode/assets/58520935/33be1d47-c9c1-46bf-bea2-933861ce5dbf)
