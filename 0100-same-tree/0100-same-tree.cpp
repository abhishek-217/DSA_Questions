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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        queue<TreeNode*>q1;
        queue<TreeNode*>q2;
        q1.push(p);
        q2.push(q);
    


        while(!q1.empty() && !q2.empty()){

           TreeNode* temp1 = q1.front();
           TreeNode* temp2 = q2.front();
            q1.pop();
            q2.pop();

          

            if(temp1 == nullptr && temp2 == nullptr){
                continue;
            }
            if(temp1 == nullptr || temp2 == nullptr || temp1->val != temp2->val){
                return false;
            }
            
                q1.push(temp1->left); 
                q1.push(temp1->right);

                q2.push(temp2->left); 
                q2.push(temp2->right);
           
        } 

        return q1.empty() && q2.empty();



        // if(p == nullptr && q == nullptr){
        //     return true;
        // }
        // if(p == nullptr || q == nullptr || p->val != q->val){
        //     return false;
        // }
    
        // return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        
        
        
        
    }
};