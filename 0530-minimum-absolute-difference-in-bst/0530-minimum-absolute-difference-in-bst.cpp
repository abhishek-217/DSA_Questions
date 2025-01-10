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
    void InOrder(TreeNode* root, vector<int>&res){
        if(root == nullptr){
            return;
        }
        
        InOrder(root->left,res);
        res.push_back(root->val);
        InOrder(root->right,res);

    }

    int getMinimumDifference(TreeNode* root) {
        vector<int>res;
        InOrder(root,res);
    
        int mindiff=INT_MAX;

        for(int i=1; i<res.size(); i++){
            mindiff = min(mindiff, res[i]-res[i-1]);
        }
        return mindiff;

    }
};