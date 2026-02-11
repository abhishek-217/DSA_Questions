class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {

        vector<string>res;

        int s = 0;

        for(int num: target){
           
            while(s < num-1){
                res.push_back("Push");
                res.push_back("Pop");
                s++;
            }

            res.push_back("Push");
            s++;

        }

        return res;
        
    }
};