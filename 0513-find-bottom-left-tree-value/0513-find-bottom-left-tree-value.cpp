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
    int findBottomLeftValue(TreeNode* root) {

        queue<TreeNode*>q;
        vector<int>res;
        q.push(root);

        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();

           res.push_back(temp->val);

           if(temp->right){
                q.push(temp->right);
           }
           if(temp->left){
                q.push(temp->left);
           }

        }

        int ans = res[res.size()-1];

        return ans;
        
    }
};