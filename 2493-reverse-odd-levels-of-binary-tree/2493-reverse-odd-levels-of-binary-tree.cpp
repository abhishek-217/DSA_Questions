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
    // void LevelOrder(TreeNode* root, int level) {
    //     if (!root || !root->left || !root->right) {  // Check null pointers
    //         return;
    //     }

    //     if (level % 2 == 1) {  // Odd level: swap left and right child values
    //         swap(root->left->val, root->right->val);
    //     }

    //     // Continue recursion for both children
    //     LevelOrder(root->left, level + 1);
    //     LevelOrder(root->right, level + 1);
    // }
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root == NULL){
            return nullptr;
        }

        queue<TreeNode*>q;
        q.push(root);
        int level =0;

        while(!q.empty()){
            int n = q.size();
            vector<TreeNode*>Clevel;

            for(int i =0; i<n; i++){
                TreeNode* temp = q.front();
                q.pop();

                Clevel.push_back(temp);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }

           if(level % 2 != 0){
                int l =0;
                int e = Clevel.size() -1;

                while(l<e){
                    swap(Clevel[l]->val, Clevel[e]->val);
                    l++;
                    e--;
                }
           }
           level++;
            
        }

        return root;
    }
};