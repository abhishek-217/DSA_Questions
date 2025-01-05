class Solution {
public:
    int numRookCaptures(vector<vector<char>>& b) {
        int m = b.size();

        int a =0;
        int s =0;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                if(b[i][j] == 'R'){
                    a =i;
                    s=j;
                    break;
                }
            }
        }
        int r1 =0;
        for(int i=a; i>=0; i--){
            if(b[i][s] == 'B'){
                break;
            }else if(b[i][s] == 'p'){
                r1++;
                break;
            }
        }
        int r2 =0;
        for(int i=a; i<m; i++){
            if(b[i][s] == 'B'){
                break;
            }else if(b[i][s] == 'p'){
                r2++;
                break;
            }
        }
        int c1 =0;
        for(int i=s; i>=0; i--){
            if(b[a][i] == 'B'){
                break;
            }else if(b[a][i] == 'p'){
                c1++;
                break;
            }
        }
        int c2 =0;
        for(int i=s; i<m; i++){
            if(b[a][i] == 'B'){
                break;
            }else if(b[a][i] == 'p'){
                c2++;
                break;
            }
        }

        return r1+r2+c1+c2;
    }
};