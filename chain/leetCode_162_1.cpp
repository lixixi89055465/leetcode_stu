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
        ListNode *fast = head;//快慢指针
        ListNode *slow = head;
        ListNode *meet = head;//相遇的节点
        while (fast) {
            slow = slow->next;
            fast = fast->next;
            if (!fast) {
                return NULL;
            }
            fast = fast->next;
            if (fast == slow) {
                meet = slow;
                break;
            }
        }
        if (meet == NULL) {
            return NULL;
        }
        while (head && meet) {
            if (head == meet) {
                return head;
            }
            head = head->next;
            meet = meet->next;
        }
        return NULL;
    }

    ListNode *detectCycle1(ListNode *head) {
        ListNode *headA, *headB;
        headA = headB = head;
        int count = 0;
        int i = 0;
        while (1) {
            count++;
            printf("count:%d,headA->val:%d\n", count, headA->val);
            headB = headB->next;
            if (headB == headA) {
                break;
            }
            headB = headB->next;
            if (headB == headA) {
                break;
            }
            headA = headA->next;
        }
        printf("headA->val :%d\n", headA->val);
        printf("count:%d\n", count);
        while (count--) {
            printf("count3:%d\n", count);
            headA = headA->next;
        }
        return headA;
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
    e.next = &c;
    Solution solve;
    printf("test111 ---- \n");
    ListNode *head = solve.detectCycle(&a);
    printf("node is %d", head->val);
    return 0;
}
