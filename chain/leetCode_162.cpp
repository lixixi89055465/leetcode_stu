#include <set>
#include "stdio.h"

struct ListNode {
    int val;//存储元素的数据域
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {} //构造函数
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        std::set<ListNode *> node_set; //设置node_set
        while (head) {
            if (node_set.find(head) != node_set.end()) {
                return head;//返回环的第一个节点
            }
            node_set.insert(head);
            head = head->next;
        }
        return NULL;
    }
};

int main6() {
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
    e.next = &c;
    Solution solve;
    printf("test111 ---- \n");
    ListNode *head = solve.detectCycle(&a);
    ListNode *tempHead = head;
    do {
        printf("%d\n", head->val);
        head = head->next;
    } while (tempHead != head);
    return 0;
}
