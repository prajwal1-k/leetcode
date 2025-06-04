/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
       struct ListNode dummy;
    struct ListNode* curr = &dummy;
    dummy.next = NULL;

    while (list1 && list2) {
        if (list1->val < list2->val) {
            curr->next = list1;
            list1 = list1->next;
        } else {
            curr->next = list2;
            list2 = list2->next;
        }
        curr = curr->next;
    }

    // Attach the remaining nodes
    if (list1) {
        curr->next = list1;
    } else {
        curr->next = list2;
    }

    return dummy.next;
}


