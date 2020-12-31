/* 
 * adlist.h - 通用双向链表实现
 * 
 * 参考自 Redis 1.3.6
 */

/* 节点 */
typedef struct listNode {
    struct listNode *prev;
    struct listNode *next;
    void *value;
} listNode;

/* 链表 */
typedef struct list {
    listNode *head;
    listNode *tail;
    unsigned int len;
} list;


/* 宏实现函数 */
#define listLength(l) ((l)->len)
#define listFirst(l) ((l)->head)
#define listLast(l) ((l)->tail)

#define listPrevNode(n) ((n)->prev)
#define listNextNode(n) ((n)->next)
#define listNodeValue(n) ((n)->value)


list *listCreate(void);