class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int>ans;
        int i = matrix.size();
        int j = matrix[0].size();

        int count = 0;
        int total = i*j;

        int frow=0;
        int fcol=0;
        int lrow=i-1;
        int lcol=j-1;


        while(count<total){
            //print starting row
            for(int index = fcol; count<total && index<=lcol;index++){
                ans.push_back(matrix[frow][index]);
                count++;
            }
            frow++;
            //print ending colum
            for(int index = frow; count<total && index<=lrow;index++){
                ans.push_back(matrix[index][lcol]);
                count++;
            }
            lcol--;
            //print ending row
            for(int index = lcol; count<total && index>=fcol;index--){
                ans.push_back(matrix[lrow][index]);
                count++;
            }
            lrow--;

            //print start col
            for(int index = lrow; count<total && index>=frow;index--){
                ans.push_back(matrix[index][fcol]);
                count++;
            }
            fcol++;

        }

        return ans;

            


       
        
    }
};