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
    void reorderList(ListNode* head) {

        ListNode* temp = head;
        vector<int> arr;
        vector<int> res;

        while (temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int i = 0;
        int n = arr.size() - 1;

        while (i <= n) {
            if (i == n) {
                res.push_back(arr[i]);
            } else {
                res.push_back(arr[i]);
                res.push_back(arr[n]);
            }
            i++;
            n--;
        }

        temp = head;
        int s = 0;

        while (temp) {
            temp->val = res[s++];
            temp = temp->next;
        }
    }
};