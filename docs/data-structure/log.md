# log

#### 2021.01.09

看之前关注的 up 主的一个算法学习视频，感觉挺好的，准备开始看看，顺便写点日志。

第一部分是《啊哈！算法》的前五章。

第一章讲了 3 种排序算法，由易到难，

- 桶排序
- 冒泡排序
- 快速排序

重新复习了一下 3 种排序的原理和编码。快速排序原理简单，但是实际写起来并不容易，注意分区条件，思路得清晰。

记住，排序也是去重的方法之一。


#### 2021.01.11

第二章讲的是队列、栈、链表。

用数组实现的循环队列和栈。至于链表，用了大篇幅讲 C 的指针和手动内存管理。最后用双数组（索引数组）模拟了一个链表。


#### 2021.01.12

第三章讲的是暴力法，穷举所有可能，最后引入全排列问题到遍历和搜索。

第四章开始讲 DFS、BFS，列举了迷宫、岛屿这种常见的二维数组题型，还有比较复杂的连通水管题。


#### 2021.01.15

第五章涉及到图，先看《我的第一本算法书》的第四章 4.1、4.2、4.3 节，简单熟悉一下图数据结构。

4.1 节结合实际场景简单介绍了一下图数据结构，包括无向图、有向图、加权图，引出图相关的两大类算法：图的搜索、最短路径。4.2 和 4.3 节举了个实例，简单讲了下 BFS、DFS。


#### 2021.01.16

第五章把图的 DFS、BFS 又讲了一遍，还给了实现。5.2 节通过 DFS 解决一个有向加权图的最短路径问题，5.3 节通过 BFS 解决一个无向图的最短路径问题。


#### 2021.01.22

第二部分是《大话数据结构》的第三、四章。

第三章详细讲线性表，3.4 ~ 3.5 介绍线性表的顺序存储结构，也就是数组；3.6 ~ 3.10 介绍线性表的链式存储结构，也就是链表。

其中 3.9 单链表的创建，提到了头插法。

3.11 对比了两种存储结构的优缺点。


#### 2021.01.23

3.12 静态链表，比较巧妙的索引思想，使用数组来模拟链表。因为单链表的节点由数据域和指针域组成，指针域的目的是引出下一个节点，可以是指针，也可以是数组下标，或者其他具有索引性质的数据。

3.13 循环链表：尾节点的指针指向头节点。但要找到尾节点还是要遍历，所以，除了头指针之外，可以再加个尾指针指向尾节点。

3.14 双向链表：节点的指针域包含两个指针，分别指向前驱节点、后继节点。所有操作都要注意维护前后节点的指向关系。在实际应用中，双向链表用的最多，至于双向循环链表，感觉没什么应用，只要在双线链表的基础上加个尾指针指向尾节点就好了。

