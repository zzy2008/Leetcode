#include <iostream>
using namespace std;
//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* pre = head;
    ListNode* cur = head;
    for (int i = 0; i < n; i++) {
        cur = cur->next;
    }
    if (!cur) return head->next;
    while (cur->next) {
        cur = cur->next;
        pre = pre->next;
    }
    pre->next = pre->next->next;
    return head;
}
int main() { 
    ListNode* dummy = new ListNode(-1);
    ListNode* cur = dummy;
    int n = 5;
    for(int i = 0; i < n; i++){
        ListNode *temp = new ListNode(i+1);
        cur->next = temp;
        cur = cur->next;
        cout << cur->val << "\t";
    }
    ListNode *head = dummy->next;
    ListNode* res = removeNthFromEnd(head, 2);
    ListNode* t = res;
    cout << endl;
    for (int i = 0; i < n-1; i++) {
        cout << t->val << "\t";
        t = t->next;
    }
    cout << endl;
    return 0; }