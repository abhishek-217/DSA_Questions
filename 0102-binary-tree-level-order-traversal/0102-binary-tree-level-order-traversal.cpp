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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr){
            return {};
        }
        vector<vector<int>>result;
        queue<TreeNode*>q1; // Create a TreeNode type queue
        q1.push(root); //push root element in queue
        q1.push(NULL); //to make level

        vector<int>curr; //Make to push in given function type

        while(!q1.empty()){
            TreeNode* temp = q1.front();
            q1.pop();

            if(temp == NULL){
                result.push_back(curr);
                curr.clear();
                if(!q1.empty()){
                    q1.push(NULL);
                }
            }
            else{
                curr.push_back(temp->val);
                if(temp->left){
                    q1.push(temp->left);
                }
                if(temp->right){
                    q1.push(temp->right);
                }
            }

        }


        return result; 
        
    }
};