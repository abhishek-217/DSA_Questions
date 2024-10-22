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
    ListNode* swapNodes(ListNode* head, int k) {

        if(head == nullptr || head->next == nullptr){
            return head;
        }
        

        int length = 0;
        ListNode* temp = head;

        while(temp != nullptr){
            length++;
            temp = temp->next;
        }

        if(k > length){
            return head;
        }

        ListNode* prev = head;
        ListNode* cur = head;

        int count = 1;

        while(count < k){
            count++;
            prev = prev->next;
        }

        int laste = 1;
        int l = length- k + 1;

        while(laste < l){
            laste++;
            cur = cur->next;
        }

        
    
        int j = prev->val;
        prev->val = cur->val;
        cur->val = j;
        

        return head;
    }
};