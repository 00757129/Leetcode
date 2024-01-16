# Dynamic programming (動態規劃)
尋找有很多**重疊子問題**的情況下的最佳解決方案 

動態規劃是分治法的延伸。當遞迴分割出來的問題，一而再、再而三出現，
::: success
運用記憶法儲存這些問題的答案，避免重複求解，以空間換取時間。
::: 

* 動態規劃類似Divide and Conquer，一個問題的答案來相依於子問題，常用來解決最佳解的問題。

* 與Divide and Conquer不同的地方在於，動態規劃多使用了memoization的機制，將處理過的子問題答案記錄下來，避免重複計算，因此在子問題重疊的時候應該使用動態規劃

* 動態規劃是分治法的延伸。當遞迴分割出來的問題，一而再、再而三出現，就運用記憶法儲存這些問題的答案，避免重複求解，以空間換取時間。

* 簡言之：「計算並儲存小問題的解，並將這些解組合成大問題的解。」

-----------------------------------------------------------------------
### Time Complexity
總共 N 個問題，每個問題花費 O(1) 時間，總共花費 O(N) 時間。

### Space Complexity
求 1! 到 N! ：總共 N 個問題，用一條 N 格陣列儲存全部問題的答案，空間複雜度為 O(N) 。

### 費波那西數列(Fibonacci)例子
```
function Fibonacci(n)
	if n == 0
		return 0
	if n == 1
		return 1
	return Fibonacci(n - 1) + Fibonacci(n - 2)
```
### 最大子序列(Maximum Subarray)例子
最大子序列(Maximum Subsequence)為Kadane’s演算法(Dynamic Programming)在一個具有正負數陣列當中，找出一段連續的元素總和最大。

Kadane’s演算法(Dynamic Programming)

```
// O(n), Kadane's 演算法(dynamic porgramming), 可不取版本
public class Kadanes {
    public static int GetMax(int[] array)
    {
        int sum = 0;
        int max = array[0];
        for (int i = 0; i < array.length; ++i)
        {
            sum += array[i];
            sum = Math.max(0, sum);
            max = Math.max(sum, max);
        }
        return max;
    }
}
```
