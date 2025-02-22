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
    int minDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;

        }

        queue<pair<TreeNode*,int>>q;
        q.push({root,1});

        while(!q.empty()){
            auto [temp , mindep] = q.front();
            q.pop();

            if(temp->left == nullptr && temp->right == nullptr){
                return mindep;
            }

            if(temp->left){
                q.push({temp->left, mindep+1});
            }
            if(temp->right){
                q.push({temp->right, mindep+1});
            }
        }

        return 0;

    }
};