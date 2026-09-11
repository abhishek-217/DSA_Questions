class Solution {
public:

    int check(int c){
        if(c % 2 == 0){
            return 0;
        }


        return 1;
    }
    vector<int> countBits(int n) {
        
        vector<int>res(n+1);

        for(int i=1; i<=n; i++){


            // make i is half then check odd or even
            // res[i] += res[i >> 1];
            res[i] += res[i/2];
            res[i] += check(i);
            
        }

        return res;

    }
};

