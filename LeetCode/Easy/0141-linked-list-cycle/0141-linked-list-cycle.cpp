/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr){
            return false;
        }
        bool check = false;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            if(fast == nullptr){
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;

            if(fast == slow){
                return true;
            }
        }

        return false;
    }
};