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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        if(root == NULL){
            return {};
        }
        vector<vector<int>>res;
        vector<int>r;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        bool flag = true;

        while(!q.empty()){

            TreeNode* temp = q.front();
            int l = q.size();

            q.pop();

            if(temp == NULL){
                if(!flag){
                    reverse(r.begin(), r.end());
                }
                res.push_back(r);
                r.clear();
                if(!q.empty()){
                    q.push(NULL);
                }
                flag = !flag;
            }else{
                r.push_back(temp->val);


                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }

        return res;

    }
};