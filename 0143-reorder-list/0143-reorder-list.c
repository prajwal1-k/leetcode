/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head) {

    if(!head || !head->next || !head->next->next){
        return;
    }

    // Find the middle element from the linked list
    struct ListNode* slow = head,*fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the list
    struct ListNode * prev = NULL, *next = NULL, *curr = slow->next;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
        slow->next = NULL;  // Cut off the first half

    // Step 3: Merge two halves
    struct ListNode *first = head, *second = prev;
    struct ListNode *tmp1, *tmp2;

    while (second) {
        tmp1 = first->next;
        tmp2 = second->next;

        first->next = second;
        second->next = tmp1;

        first = tmp1;
        second = tmp2;
    }
}