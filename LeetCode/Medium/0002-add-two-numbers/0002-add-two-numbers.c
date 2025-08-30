/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode node;

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    node *head = malloc(sizeof(node));
    head->val = 0;
    node *curr = head;

    int plus1 = 0;

    while (l1 != NULL || l2 != NULL || plus1 > 0) {
        int sum = plus1;
        
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }
        
        if(sum >= 10){
            plus1 = 1;
        }
        else{
            plus1 = 0;
        }

        node *newNode = malloc(sizeof(node));
        newNode->val = sum % 10;
        newNode->next = NULL;
        curr->next = newNode;
        curr = curr->next;
    }
    
    node *result = head->next;

    return result;
}