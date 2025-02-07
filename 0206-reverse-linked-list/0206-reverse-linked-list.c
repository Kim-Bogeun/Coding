/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *curr=head, *prev=NULL, *temp=NULL;

    while(curr != NULL){
        temp = curr;
        curr = curr->next;
        temp->next = prev;
        prev = temp;
    }

    return temp;
}