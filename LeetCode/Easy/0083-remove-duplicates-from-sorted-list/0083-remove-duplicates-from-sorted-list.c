/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* tail = head;
    struct ListNode* dummy = tail;
 
    while(tail && tail->next){
        if(tail->val == tail->next->val){
            tail->next = tail->next->next;
        }

        else{
            tail = tail->next;
        }
    }

    return dummy;
}