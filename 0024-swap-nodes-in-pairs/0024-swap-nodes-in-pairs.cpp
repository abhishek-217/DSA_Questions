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

    void arrV(vector<int>&res){
        for(int i=1; i<res.size(); i=i+2){
            swap(res[i],res[i-1]);
        }
    }
    ListNode* ansL(vector<int>&res){
        ListNode* head = new ListNode(res[0]);
        ListNode* temp = head;

        for(int i=1; i<res.size(); i++){
            temp->next = new ListNode(res[i]);
            temp = temp->next;
        }

        return head;
    }

    ListNode* swapPairs(ListNode* head) {

        if(head == nullptr || head->next == nullptr ){
            return head;
        }

        vector<int>res;
        ListNode* temp = head;
        while(temp){
            res.push_back(temp->val);
            temp = temp->next;
        }
        arrV(res);

        return ansL(res);
        
    }
};