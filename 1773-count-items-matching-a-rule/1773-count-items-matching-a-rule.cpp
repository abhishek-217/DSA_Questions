class Solution {
public:
    int countMatches(vector<vector<string>>& item, string rK, string rV) {
        
        int n = item.size();
        int count =0;

        for(int i=0; i<n; i++){
            if(rK == "type"){
                if(rV == item[i][0]){
                    count++;
                }
            }
            if(rK == "color"){
                if(rV == item[i][1]){
                    count++;
                }
            }
            if(rK == "name"){
                if(rV == item[i][2]){
                    count++;
                }
            }
        }

        return count;
    }
};