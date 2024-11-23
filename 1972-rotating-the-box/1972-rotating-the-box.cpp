class Solution {
public:

    void fillStone(vector<vector<char>>& ans, int count, int x , int y){
        while(count != 0){
            ans[x][y] = '#';
            x--;
            count--;
        }
    }
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        
        int l = box.size();
        int l1 = box[0].size();

        vector<vector<char>>ans(l1, vector<char>(l, '.'));

        for(int i=0; i<l; i++){
            int count =0;
            for(int j=0; j<l1; j++){
                if(box[i][j] == '#'){
                    count++;
                }else if(box[i][j] == '*'){
                    ans[j][l-i-1] = '*';
                    fillStone(ans,count,j-1, l-i-1);
                    count =0;
                }
            }
           
            if(count >0){
                fillStone(ans,count, l1-1, l-i-1);
            }

        }

        return ans;

    }
};