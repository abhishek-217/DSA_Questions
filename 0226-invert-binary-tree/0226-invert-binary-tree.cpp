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
    TreeNode* invertTree(TreeNode* root) {
        
        if(root == NULL){
            return {};
        }

        // swap(root->left, root->right);

        // invertTree(root->left);
        // invertTree(root->right);

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
           TreeNode* temp = q.front();
            q.pop();

            swap(temp->left, temp->right);

            if(temp->left){ 
                q.push(temp->left); 
            }
            if(temp->right){ 
                q.push(temp->right);
            }
        } 

        return root; 
    }
};