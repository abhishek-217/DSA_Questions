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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* temp = head;
        // set<int>st;
        map<int,int>mp;

        while(temp){
            // st.insert(temp->val);
            mp[temp->val]++;
            temp = temp->next;
        }

        ListNode* head1 = new ListNode(3);
        ListNode* dummy =  head1;
        

        for(auto &[k,v] : mp){

            if(v == 1){

                dummy->next = new ListNode(k);
                dummy = dummy->next;
            }
        }


        return head1->next;
    }
};
