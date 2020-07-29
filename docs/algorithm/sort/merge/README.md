# 1. 归并排序

> 稳定排序、外排序、分治算法、递归


### 1. 核心：归并
> 将两个有序序列合并成一个有序序列。

归并操作是归并排序的核心。如下图：
![merge.gif](https://github.com/liangkuai/mylib/tree/master/assets/images/algorithm/sort/merge/merge.gif)
> 很明显，如果 A 数组长度为 n，B 数组长度为 m，那么归并操作
> - 时间复杂度：O(n + m)
> - 空间复杂度：O(n + m)


 示例代码 
```java
/**
 * 将两个有序数组进行排序并合并
 *
 * @param a 有序数组
 * @param b 有序数组
 *
 * @return 排序并合并后的数组
 */
private int[] merge(int[] a, int[] b) {
    int[] c = new int[a.length + b.length];
    int i = 0, j = 0, k = 0;
    
    for (; i < a.length && j < b.length; ++k) {
        // a[i] <= a[j]，使用 <= 可以保证排序的稳定性
        if (a[i] <= b[j])
            c[k] = a[i++];
        else
            c[k] = b[j++];
    }
    while (i < a.length) c[k++] = a[i++];
    while (j < b.length) c[k++] = b[j++];
    
    return c;
}
```


### 2. 实现
#### 递归

1. 自顶向下均分成两部分；
1. 左右两部分分别进行归并排序；
1. 将左右两部分归并。



#### 迭代
2个2个元素归并，4个4个元素归并......，直到整个数组有序。


### 3. 重点

- 一次性创建临时数组，避免在每次归并时创建和释放不必要的内存空间。
- 在两个连续的区间已经有序的情况下，没必要再进行归并。



### 4. 性能

- 时间复杂度：O(nlogn)


- 空间复杂度：O(n)



### 5. 总结
归并排序的算法思想就是：分而治之（分治思想）。


#### 优点

- 性能良好并且稳定，最坏时间复杂度依然是 O(nlogn)。



#### 缺点

- 空间复杂度，需要与元素个数相等的空间，所以常用于外排序。



### 6. 优化
#### 6.1 对小规模子数组使用插入排序
用不同的方法处理小规模问题能改进大多数递归算法的性能，因为递归会使小规模问题中方法的调用过于频繁，所以改进对它们的处理方法就能改进整个算法。


对排序来说，插入排序（或选择排序）非常简单，因此很可能在小数组上比归并排序更快。


### 参考

- [912. 排序数组 - 排序数组 - 力扣官方解题](https://leetcode-cn.com/problems/sort-an-array/solution/pai-xu-shu-zu-by-leetcode-solution/)
- [912. 排序数组 - 复习基础排序算法（Java）- liweiwei1419](https://leetcode-cn.com/problems/sort-an-array/solution/fu-xi-ji-chu-pai-xu-suan-fa-java-by-liweiwei1419/)
