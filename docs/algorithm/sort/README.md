# 排序


### 1. 排序算法特性

#### 1.1 稳定/不稳定

稳定排序：值相等的两个元素，在排序后相对位置没有改变。

#### 1.2 内部/外部

外部排序：序列元素数量太大，内存中无法一次性比较所有元素，需要访问外部存储器。


### 2. 性能对比

![排序性能](/assets/images/algorithm/sort/排序性能.png)



### 3. 什么时候需要排序？

#### 3.1 去重

排序之后，相等的元素都连在一起，也就是顺序特性。

参考：[15. 三数之和](https://leetcode-cn.com/problems/3sum/) `medium`




## 经典题型

#### 1. 排序

- [912. 排序数组](https://leetcode-cn.com/problems/sort-an-array/) `medium`

#### 2. 归并

- [88. 合并两个有序数组](https://leetcode-cn.com/problems/merge-sorted-array/) `easy`
- [21. 合并两个有序链表](https://leetcode-cn.com/problems/merge-two-sorted-lists/) `easy`
- [23. 合并K个排序链表](https://leetcode-cn.com/problems/merge-k-sorted-lists/) `hard`
