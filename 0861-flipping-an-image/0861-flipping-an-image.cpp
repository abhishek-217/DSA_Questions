class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        vector<vector<int>>res;
        vector<vector<int>>ans;
        int l = image.size();

       for(int i = 0; i < l; ++i) {
            vector<int> re; 
            int j = image[i].size(); 
            while(j > 0) {
                re.push_back(image[i][j - 1]); // Add elements in reverse order
                --j;
            }
            res.push_back(re); // Push the reversed row into the result
        }
        
        for(int i=0; i<res.size(); i++){
            vector<int>an;
            
            for(int j = 0; j<res[i].size(); j++){
                int s = res[i][j] ^ 1; 
                an.push_back(s);
                
            }
            ans.push_back(an);
        }

        return ans;

        
    }
};