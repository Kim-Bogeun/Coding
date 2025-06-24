/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* cur1 = list1;
    struct ListNode* cur2 = list2;
    struct ListNode* head;
    struct ListNode* headcur;

    if(cur1 == NULL){
        return cur2;
    }
    else if(cur2 == NULL){
        return cur1;
    }

    else{
        if(cur1->val < cur2->val){
            head = cur1;
            cur1 = cur1->next;
        }
        else{
            head = cur2;
            cur2 = cur2->next;
        }
    }

    headcur = head;

    while(true){
        if(cur1 == NULL){
            headcur->next = cur2;
            break;
        }
        else if(cur2 == NULL){
            headcur->next = cur1;
            break;
        }

        else{
            if(cur1->val < cur2->val){
                headcur->next = cur1;
                cur1 = cur1->next;
                headcur = headcur->next;
            }

            else{
                headcur->next = cur2;
                cur2 = cur2->next;
                headcur = headcur->next;
            }
        }
    }

    return head;

}