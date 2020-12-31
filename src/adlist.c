/* 
 * adlist.h - 通用双向链表实现
 * 
 * 参考自 Redis 1.3.6
 */

#include <stdlib.h>
#include "adlist.h"


list *listCreate(void)
{
    list *list;

    if(list = malloc(sizeof(*list)) == NULL)
        return NULL;

    list->head = NULL;
    list->tail = NULL;
    list->len = 0;

    return list;
}