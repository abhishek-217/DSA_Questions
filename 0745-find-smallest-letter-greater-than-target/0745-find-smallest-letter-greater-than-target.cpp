class Solution {
public:
    char nextGreatestLetter(vector<char>& let, char tar) {
        
        int l = let.size();
        for(int i=0; i<l; i++){
            if(let[i] > tar){
                return let[i];
            }
        }

        return let[0];
    }
};