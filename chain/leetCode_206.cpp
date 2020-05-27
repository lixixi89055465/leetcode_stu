#include "stdio.h"

struct ListNode {
    int val;//存储元素的数据域
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        ListNode *new_head = NULL;
        ListNode *next = NULL;
        while (head) {
            next = head->next;
            head->next = new_head;
            new_head = head;
            head = next;
        }
        return new_head;
    }
};

int main() {
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
    ListNode *head = &a;
    printf("Before reverse:\n");
    while (head) {
        printf("%d\n", head->val);
        head = head->next;
    }
    head = solve.reverseList(&a);
    printf("after reverse:\n");
    printf("head is : %d\n", head);
    while (head) {
        printf("%d\n", head->val);
        head = head->next;
    }
    printf("head is : %d\n", head);

    return 0;


}
