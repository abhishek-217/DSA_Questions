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
        if(root == nullptr){ //Check if root is null then return null
            return {};
        }
        vector<vector<int>>result;
        queue<TreeNode*>q1; // Create a TreeNode type queue 
        q1.push(root); //push root element in queue
        q1.push(NULL); //to make level

        vector<int>curr; //Make to push in given function type

        while(!q1.empty()){
            TreeNode* temp = q1.front();  // Initialize temp to point value at front
            q1.pop();   //pop the front val

            if(temp == NULL){
                result.push_back(curr); //push to the result matrix
                curr.clear(); // After takeover the val curr will be clear

                if(!q1.empty()){
                    q1.push(NULL); // To change the level
                }
            }
            else{
                curr.push_back(temp->val); //Push front val to curr array
                if(temp->left){
                    q1.push(temp->left); //If not null push the val to childeren node to left
                }
                if(temp->right){
                    q1.push(temp->right); //If not null push the val to childeren node to right
                }
            }

        }


        return result;  // return the stored val in the result matrix
        
    }
};