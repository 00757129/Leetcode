# 題目大意：
將已排序的 List 中重複的元素移除，並維持排序。

# 解題過程：
1. 以指標 index 來記錄記錄當前 node，以 tmp 往後檢查是否為相同的值。
若相同，tmp 往後移動；若數值不同，則將 index 指到 tmp 上

---------------
![image](https://github.com/00757129/Leetcode/assets/58520935/1a2f090b-da50-48c7-b89c-90f782f27a35)

![image](https://github.com/00757129/Leetcode/assets/58520935/41c7a577-73e5-4749-ae04-a98749aa14b6)

