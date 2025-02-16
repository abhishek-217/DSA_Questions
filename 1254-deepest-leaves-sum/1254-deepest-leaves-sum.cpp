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
    int deepestLeavesSum(TreeNode* root) {
        vector<int>arr;

        if(root==nullptr){
            return 0;
        }

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            int sum =0;

            for(int i=0; i<n; i++){
                TreeNode* temp = q.front();
                q.pop();
                sum = sum + temp->val;

                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            arr.push_back(sum);
        }

        return arr[arr.size()-1];
    }
};