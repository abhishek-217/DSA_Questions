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
    void Inorder(TreeNode* root , vector<int>&re){

        
        if(root == nullptr){
            return ;
        }

        Inorder(root->left, re);
        re.push_back(root->val);
        Inorder(root->right, re);

    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>ans;
        Inorder(root, ans);
        int sum =0;

        for(int i =0; i<ans.size(); i++){
            
            if(ans[i] >= low && ans[i] <= high){
                sum = sum + ans[i];
            }
        }

        return sum;
    }
};