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
    ListNode *detectCycle(ListNode *head) {
        // int count =0;
        if( head == nullptr || head->next == nullptr ) {
            return 0;
        }
        ListNode* slow = head; 
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(slow==fast){
                break;
            }
            
        }
        if(fast==nullptr || fast->next == nullptr) return 0;

        fast = head;

        while (fast != slow ){
            fast = fast->next;
            slow = slow->next;
            
        }
    

       return fast;
    }

};