#include "stdio.h"

struct ListNode {
    int val;//存储元素的数据域
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {} //构造函数
};

int getList_length(ListNode *head) {
    int len = 0;
    while (head) {
        len++;
        head = head->next;
    }
    return len;
}

ListNode *forward_long_list(int long_len,//
                            int short_len,//
                            ListNode *head) {
    int delta = long_len - short_len;
    while (head && delta) {
        head = head->next;
        delta--;
    }
    return head;
}

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int list_A_len = getList_length(headA);
        int list_B_len = getList_length(headB);
        if (list_A_len > list_B_len) {
            headA = forward_long_list(list_A_len, list_B_len, headA);
        } else {
            headB = forward_long_list(list_B_len, list_A_len, headB);
        }
        while (headA && headB) {
            if (headA == headB) {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
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
