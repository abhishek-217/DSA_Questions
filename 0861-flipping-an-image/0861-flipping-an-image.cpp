class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        vector<vector<int>>res;
        int l = image.size();

       for(int i = 0; i < l; i++) {
            vector<int> re; 
            int j = image[i].size(); 
            while(j > 0) {
                re.push_back(image[i][j - 1]); // Add elements in reverse order
                j--;
            }
            res.push_back(re); // Push the reversed row into the result
        }
        
        for(int i=0; i<res.size(); i++){

            for(int j = 0; j<res[i].size(); j++){
                res[i][j] = res[i][j] ^ 1; 
            }
        }

        return res;

        
    }
};