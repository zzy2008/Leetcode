#include <iostream>
#include <random>
using namespace std;
//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode *dummy = new ListNode(-1), *cur = dummy;
    while (l1 && l2) {
        if (l1->val < l2->val) {
            cur->next = l1;
            l1 = l1->next;
        } else {
            cur->next = l2;
            l2 = l2->next;
        }
        cur = cur->next;
    }
    // l2 和 l2有一个已经取完时
    cur->next = l1 ? l1 : l2;
    return dummy->next;
}
int main() {
    ListNode *dummy1 = new ListNode(-1);
    ListNode *dummy2 = new ListNode(-1);
    int n = 3;
    int delta = 0;
    cout << "l1: ";
    ListNode *cur = dummy1;
    for (int i = 0; i < n; i++) {
        ListNode *temp = new ListNode(rand() % 100 + delta);
        cur->next = temp;
        cur = cur->next;
        cout << cur->val << " ";
        delta += 100;
    }
    cout << endl;
    delta = 0;
    cout << "l2: ";
    cur = dummy2;
    for (int i = 0; i < n; i++) {
        ListNode *temp = new ListNode(rand() % 100 + delta);
        cur->next = temp;
        cur = cur->next;
        cout << cur->val << " ";
        delta += 100;
    }
    cout << endl;
    // Initialize this two listnode.
    ListNode *l1 = dummy1->next;
    ListNode *l2 = dummy2->next;

    ListNode *res = mergeTwoLists(l1, l2);
    ListNode *t = res;
    cout << "Result list: ";
    for (int i = 0; i < 2 * n; i++) {
        cout << t->val << " ";
        t = t->next;
    }
    cout << endl;
    return 0;
}