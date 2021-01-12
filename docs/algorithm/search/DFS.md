# DFS

深度优先搜索（Depth First Search，DFS），常用于（树/图）遍历/搜索。

#### 1. 基本思路

- 理解 DFS 的关键在于解决 “当前该如何做”，而 “下一步如何做” 是一样的。
- “当前该如何做” 通常都是把每一种可能都尝试一遍（一般都是 for 循环遍历）。

#### 2. DFS 基本模型

```java
void dfs(int step) {
    // 判断边界

    // 尝试每一种可能
    for (int i = 0; i <= n; i++) {
        // 继续下一步
        dfs(step + 1);
    }

    return;
}
```



## 经典题型

- [695. 岛屿的最大面积](https://leetcode-cn.com/problems/max-area-of-island/) `medium`
