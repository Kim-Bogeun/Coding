/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode Node;

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    
    Node *curr1 = list1, *curr2 = list2, *curr = NULL, *head = NULL;

    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    if (list1->val <= list2->val) {
        head = curr1;
        curr1 = curr1->next;
    } else {
        head = curr2;
        curr2 = curr2->next;
    }
    curr = head;

    while(curr1 && curr2){
        if(curr1->val > curr2->val){
            curr->next = curr2;
            curr2 = curr2->next;
            curr = curr->next;
        }
        else{
            curr->next = curr1;
            curr1 = curr1->next;
            curr = curr->next;
        }
    }

    if(curr1 != NULL){
        curr->next = curr1;
    }
    if(curr2 != NULL){
        curr->next = curr2;
    }

    return head;   
}