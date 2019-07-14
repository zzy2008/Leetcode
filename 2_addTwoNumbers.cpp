#include <iostream>
using namespace std;
//   Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
   public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = NULL, *p;
        int carry = 0;
        int sum;
        while (l1 != NULL || l2 != NULL || carry != 0) {
            sum = 0;
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum / 10;
            sum %= 10;
            ListNode* newhead = new ListNode(sum);
            if (head == NULL) {
                head = newhead;
                p = newhead;
            } else {
                p->next = newhead;
                p = p->next;
            }
        }
        return head;
    }
};
void initList(ListNode* head, int n) {
    ListNode *p, *s;
    head = (ListNode*)malloc(sizeof(ListNode));
    head->next = NULL;
    p = head;
    for (int i = 0; i < n; i++) {
        s = (ListNode*)malloc(sizeof(ListNode));
        cin >> s->val;
        s->next = NULL;
        p->next = s;
        p = p->next;
    }
}
int main() {
    ListNode* s1 = (ListNode*)malloc(sizeof(ListNode));
    ListNode* s2 = (ListNode*)malloc(sizeof(ListNode));
    initList(s1, 3);
    initList(s2, 3);
    Solution ss;
    cout << ss.addTwoNumbers(s1, s2);
    return 0;
}