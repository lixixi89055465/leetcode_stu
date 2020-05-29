//
//  main.cpp
//  aaa
//
//  Created by lixiang on 2020/5/29.
//  Copyright © 2020 lixiang. All rights reserved.
//


#include <set>
#include "stdio.h"

struct ListNode {
    int val;//存储元素的数据域
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {} //构造函数
};

class Solution {
public:
    ListNode *partition(ListNode *headA, int x) {
        ListNode less_head(0);//设置两个临时的头节点
        ListNode more_head(0);//设置两个临时的头节点
        ListNode *less_ptr = &less_head;
        ListNode *more_ptr = &more_head;
        less_ptr->next = NULL;
        more_ptr->next = NULL;
        printf("ccccc");
        while (headA) {
            printf("headA:%d\n", headA->val);
            if (headA->val >= x) {
                more_ptr->next = headA;
                more_ptr = headA;
            } else {
                less_ptr->next = headA;
                less_ptr = headA;
            }
            headA = headA->next;
        }
        less_ptr->next = more_head.next;
        headA = less_head.next;
//        headA = &less_head;
        return headA;
    }
};

int main() {
    printf("aaaaa");
    ListNode a(5);
    ListNode b(2);
    ListNode c(3);
    ListNode d(0);
    ListNode e(4);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;
    Solution solve;
    printf("test111 ---- \n");
    ListNode *head = solve.partition(&a, 4);
    printf("test222 ---- %d\n", head->val);
    printf("test222 ---- %d\n", head->next);
    while (head) {
        printf("%d\n", head->val);
        head = head->next;
    }
    printf("tiankong");
    return 0;
}
