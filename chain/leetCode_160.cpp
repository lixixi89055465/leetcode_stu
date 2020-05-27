#include <set>
#include "stdio.h"

struct ListNode {
    int val;//存储元素的数据域
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {} //构造函数
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::set<ListNode *> node_set;
        while (headA) {
            node_set.insert(headA);
            headA = headA->next;
        }
        while (headB) {
            if (node_set.find(headB) != node_set.end()) {
                return headB;
            }
        }
        return NULL;
    }
};

int main() {
    printf("aaaaa");
    ListNode a(1);
    ListNode b(2);
    ListNode c(3);
    ListNode d(4);
    ListNode e(5);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;
    Solution solve;
    printf("test111 ---- \n");
    ListNode *head = solve.getIntersectionNode(&a, &b);
    printf("test222 ---- %d\n", head->val);
    while (head) {
        printf("%d\n", head->val);
        head = head->next;
    }
    return 0;
}
