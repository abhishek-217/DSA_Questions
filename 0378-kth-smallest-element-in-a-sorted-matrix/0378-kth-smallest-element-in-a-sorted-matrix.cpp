class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>pq;
        int m = matrix.size(); 

        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                pq.push(matrix[i][j]);
            }
        }

        int l = pq.size();
        int c = l-k;
        if(c != 0){
            while(c != 0){
                pq.pop();
                c--;
            }
        }

        return pq.top();
    }
};