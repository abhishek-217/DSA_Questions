/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int minSwaps(vector<int>& arr) {
        int n = arr.size();
        vector<pair<int, int>> arrPos(n);

        // Store the element and its index
        for (int i = 0; i < n; i++) {
            arrPos[i] = {arr[i], i};
        }

        sort(arrPos.begin(), arrPos.end());

        vector<bool> visited(n, false);
        int swaps = 0;

        // Count minimum swaps required to sort the array
        for (int i = 0; i < n; i++) {
            if (visited[i] || arrPos[i].second == i) {
                continue;
            }

            int cycle_size = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = arrPos[j].second;
                cycle_size++;
            }

            if (cycle_size > 1) {
                swaps += (cycle_size - 1);
            }
        }
        return swaps;
    }

    void lot(TreeNode*  root, int &ans){
        if(root == nullptr){
            return;
        }
        queue<TreeNode*>qu;
        qu.push(root);

        while(!qu.empty()){
            int n = qu.size();
            vector<int>res;
            for(int i=0; i<n; i++){
                TreeNode* temp = qu.front();
                qu.pop();

                res.push_back(temp->val);
                if(temp->left){
                    qu.push(temp->left);
                }
                if(temp->right){
                    qu.push(temp->right);
                }
            }
            ans = ans + minSwaps(res);
        }
    }
    int minimumOperations(TreeNode* root) {
        int ans =0;
        lot(root,ans);

        return ans;
        
    }
};