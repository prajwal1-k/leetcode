/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *merge(struct ListNode *l1, struct ListNode *l2){
    struct ListNode dummy;
    struct ListNode *tail = &dummy;
    dummy.next = NULL;

    while(l1 && l2){
        if(l1->val < l2->val){
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    if (l1) tail->next = l1;
    else tail->next = l2;

    return dummy.next;
}
//helpper function to find the middle element
struct ListNode *findMiddle(struct ListNode *head){
    struct ListNode *slow = head;
    struct ListNode *fast = head->next;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
struct ListNode* sortList(struct ListNode* head) {
    if(!head || !head->next)
    return head;

    struct ListNode *mid = findMiddle(head);
    struct ListNode *right = mid->next;
    mid->next = NULL;

    struct ListNode* leftSorted = sortList(head);
    struct ListNode* rightSorted = sortList(right);

    return merge(leftSorted, rightSorted);
}