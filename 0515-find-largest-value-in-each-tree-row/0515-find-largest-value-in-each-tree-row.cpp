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
    vector<int> largestValues(TreeNode* root) {
        if(root == nullptr){
            return {};
        }

        queue<TreeNode*>q;
        q.push(root);
        vector<int>res;

        while(!q.empty()){
            int l = q.size();
            vector<int>ans;

            for(int i=0; i<l; i++){
                TreeNode* temp = q.front();
                q.pop();

                ans.push_back(temp->val);

                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            sort(ans.begin(), ans.end());
            res.push_back(ans[ans.size()-1]);
        }

        return res;
        
    }
};