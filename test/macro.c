#include <stdio.h>
#include <stddef.h>

typedef struct Node {
    char a;
    int b;
    char c;
} N;


int main(int argc, char** argv)
{
    printf("当前文件: %s\n", __FILE__);
    printf("当前行号: %d\n", __LINE__);
    printf("当前日期: %s %s\n", __DATE__, __TIME__);
    printf("当前编译器是否遵循 ANSI C: %d\n", __STDC__);

    size_t offset = offsetof(N, b);
    printf("offset = %zu", offset);

}


#define ADD_TO_SUM(sum_number, value) sum##sum_number += value
