#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* deleteDuplicates(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    ListNode* p = head;
    while (p->next != NULL && p != NULL) {
        if (p->val == p->next->val) {
            p->next = p->next->next;
        } else {
            p = p->next;
        }
    }
    return head;
}
int main() {
    ListNode * head1 = new ListNode(1);
    head1->next = new ListNode(1);
    head1->next->next = new ListNode(2);
    head1->next->next->next = new ListNode(3);
    ListNode* headn = deleteDuplicates(head1);
    cout << headn->val << endl;
    cout << headn->next->val << endl;
    cout << headn->next->next->val << endl;
    return 0;
}