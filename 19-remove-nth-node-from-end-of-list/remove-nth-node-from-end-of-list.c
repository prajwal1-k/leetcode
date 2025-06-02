/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int length = 0;
    struct ListNode* curr = head;

    // calculate the length of the linked list
    while(curr != NULL){
        length ++;
        curr = curr->next;
    }

    int traverse = length - n - 1;
    int i = 0;
    curr = head;

    //if head is to be removed
    if(traverse == -1){
        head = head->next;
        free(curr);
        return head;
    }
    // Traverse the node before the one to br removed
    while(i < traverse){
        curr = curr->next;
        i++;
    }
        
        struct ListNode* temp = curr->next;
        curr->next = curr->next->next;
        free(temp);

        return head;
}