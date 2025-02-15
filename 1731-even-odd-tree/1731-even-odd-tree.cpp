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
    bool isEvenOddTree(TreeNode* root) {
        if(root == nullptr){
            return false;
        }

        queue<TreeNode*>q;
        q.push(root);
        int l =0;

        while(!q.empty()){
            int n = q.size();
                int max = INT_MAX;
                int min = 0;

            for(int i=0; i<n; i++){
                TreeNode* temp = q.front();
                q.pop();

                if(l%2 ==0){
                    if(temp->val % 2 == 0 || temp->val <= min){
                        return false;
                    }
                    min = temp->val;
                    
                }else{
                    if(temp->val % 2 != 0 || temp->val >= max){
                        return false;
                    }
                    max = temp->val;
                    
                }

                if(temp->left){
                    q.push(temp->left);
                }

                if(temp->right){
                    q.push(temp->right);
                }
            }
            l++;
        }

        return true;
    }
};