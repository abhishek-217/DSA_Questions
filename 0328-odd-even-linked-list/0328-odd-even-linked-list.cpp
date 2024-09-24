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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddh = nullptr;
        ListNode* oddt = nullptr;
        ListNode* evenh = nullptr;
        ListNode* event = nullptr;

        int count =1;
        while(head != nullptr){
            if(count % 2 != 0){
                if(oddh == nullptr){
                    oddh = head;
                    oddt = head;
                    head = head->next;
                }else{
                    oddt->next = head;
                    oddt = oddt->next;
                    head = head->next;
                }
            }else{
                if(evenh == nullptr){
                    evenh = head;
                    event = head;
                    head = head->next;
                }else{
                    event->next = head;
                    event = event->next;
                    head= head->next;
                }
            }

            // head = head->next;
            count++;
        }

        if(oddh == nullptr){
            return evenh;
        }
        if(evenh == nullptr){
            return oddh;
        }
        event->next = nullptr;
        oddt->next = evenh;

        return oddh;
    }
};