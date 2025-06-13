/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insertionSortList(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next = NULL;

    struct ListNode* curr = head;

    while(curr != NULL){
        struct ListNode* next = curr->next;   // store the next node
        struct ListNode* prev = &dummy;
    
    //find the correct position to sorted
    while(prev->next != NULL && prev->next->val < curr->val){
        prev = prev->next;
    }

    //insert the current element b/w prev and prev->next
      curr->next = prev->next;
     prev->next = curr;
  
  curr = next;
  }
  return dummy.next;


}