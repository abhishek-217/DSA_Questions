class Solution {
public:
    string removeDigit(string n, char d) {

        int l = n.size();
        vector<string>res;
        for(int i=0; i<l; i++){

            if(n[i] == d){

                string temp = n.substr(0,i) +  n.substr(i+1,l);
                res.push_back(temp);
            }
        }

        sort(res.begin(), res.end()); 
      
        
        return res[res.size()-1];
        
    }
};