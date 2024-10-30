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

    // We use Inorder traversal but in reverse order (R-N-L)

    void RevInorder(TreeNode* root, int &sum){

        if(root == nullptr){
            return;
        }

        RevInorder(root->right, sum);
        sum = sum + root->val;
        root->val = sum;
        RevInorder(root->left, sum);

    }
    TreeNode* convertBST(TreeNode* root) {

        int ans =0;
        RevInorder(root, ans);
        
        return root;
    }
};