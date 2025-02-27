/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;

        if(root == nullptr){
            return ans;
        }

        queue<Node*>q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            vector<int>res;

            for(int i=0; i<n; i++){
                Node* temp = q.front();
                q.pop();

                res.push_back(temp->val);

                int l = temp->children.size();
                for(int j=0; j<l; j++){
                    q.push(temp->children[j]);
                }
                
            }

            ans.push_back(res);
        }

        return ans;
    }
};