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
    void arrval(ListNode* head,vector<int>&res){
        ListNode* temp = head;
        while(temp != nullptr){
            res.push_back(temp->val);
            temp= temp->next;
        }
    }

    void rarr(vector<int>&arr, int k){
        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
    }

    ListNode* rlist(vector<int>&arr){

        ListNode* head = new ListNode(arr[0]);  // Create first node
        ListNode* temp = head;

        for (int i = 1; i < arr.size(); i++) {
            temp->next = new ListNode(arr[i]);  // Create new node
            temp = temp->next;  // Move to next node
        }

        return head;
    }



    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* temp = head;
        int count = 0;

        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        k = k%count;
        vector<int>res;

        arrval(head,res);
        rarr(res,k);

        return rlist(res);
    }
};