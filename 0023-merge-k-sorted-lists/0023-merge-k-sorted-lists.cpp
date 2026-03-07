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
    ListNode* mergeKLists(vector<ListNode*>& li) {

        // int n = li.size();

        // if(n == 0){
        //     return nullptr;
        // }

        // vector<int>arr;

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<li[0].size(); j++){
        //         arr.push_back(li[i][j]->val);
        //     }
        // }

        // sort(arr.begin(), arr.end());

        // ListNode* head = new ListNode(arr[0]);
        // ListNode* temp = head;

        // for(int i=1; i<arr.size(); i++){
        //     temp->next = new ListNode(arr[i]);
        //     temp = temp->next;
        // }

        // return head;

        int n = li.size();

        if (n == 0) {
            return nullptr;
        }

        vector<int> arr;

        // Traverse all linked lists
        for (int i = 0; i < n; i++) {

            ListNode* temp = li[i];

            while (temp != nullptr) {
                arr.push_back(temp->val);
                temp = temp->next;
            }
        }

        if (arr.size() == 0)
            return nullptr;

        sort(arr.begin(), arr.end());

        ListNode* head = new ListNode(arr[0]);
        ListNode* temp = head;

        for (int i = 1; i < arr.size(); i++) {
            temp->next = new ListNode(arr[i]);
            temp = temp->next;
        }

        return head;
    }
};