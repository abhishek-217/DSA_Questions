/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* curr = head->next;
        ListNode* prev = curr;
        while(curr != nullptr){
           int Add =0;
            while(curr->val != 0){ 
               Add = Add + curr->val; 
                curr = curr->next;
            }

            prev->val = Add; //Put Add value in prev

            prev->next = curr->next; //Connect prev next pointer to after zero node

            prev = prev->next; // then move prev to next non zero value
            
            curr = curr->next; //curr to non - value node to restart the loop
            
        }
       
        return head->next;
         
    }
};