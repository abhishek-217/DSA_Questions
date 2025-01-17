class Solution {
public:
    bool doesValidArrayExist(vector<int>& d){
       
       int x=0;
        for(auto e: d){
            x = x^e;
        }

        return x==0;

    }
};