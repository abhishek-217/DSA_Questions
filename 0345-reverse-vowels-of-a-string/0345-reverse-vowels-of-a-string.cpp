class Solution {
public:
    string reverseVowels(string s) {
        string vow = "";
        unordered_set<char>ans = {'a','A','e','E','i','I','o','O','u','U'};

        for(char i: s){
            if(find(ans.begin(), ans.end(), i) != ans.end()){
                vow.push_back(i);
            }
        }


        string st = "";
        
        int e = vow.size()-1;
        for(char i: s){
            if(find(ans.begin(), ans.end(), i) != ans.end()){
                st.push_back(vow[e]);
                e--;
            }else{
                st.push_back(i);

            }
        }
        
        return st;
    }
};