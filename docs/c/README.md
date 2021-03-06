# C

## 1. 预处理（preprocessing）

### 1.1 预定义符号

- `__FILE__`：进行编译的原文件名
- `__LINE__`：当前行号
- `__DATE__`：被编译的日期
- `__TIME__`：被编译的时间
- `__STDC__`：如果编译器遵循 ANSI C，值就是 1，否则就未定义

### 1.2 宏

#### 预处理指令

- `#define`：定义宏
- `#undef`：取消已定义的宏

#### 无参数宏：文本替换

#### 有参数宏：类似于函数

### 1.3 条件编译

- `#if`
- `#elif`
- `#else`
- `#endif`
- `#ifdef`
- `#ifndef`

### 1.4 文件包含

- `#include <xxx.h>"`：函数库.h文件

- `#include "xxx.h"`：本地 .h 文件


### 1.5 其他预处理指令


## 运算符优先级

|等级|操作符|描述|结合性|
|:-:|:-|:-|:-|
| 1 | `()` | 括号 | L-R |
| 2 | `[]` | 下标 | L-R |
| 3 | `.` | 访问结构体成员 | L-R |
| 4 | `->` | 访问结构体指针成员 | L-R |
| 5 | `*` | 间接访问 | R-L |
| 6 | `&` | 取地址 | R-L |




## 参考

- 《C和指针》
- 《Linux C 编程实战》
- 《UNIX 环境高级编程》
- 《鸟哥的 Linux 私房菜》