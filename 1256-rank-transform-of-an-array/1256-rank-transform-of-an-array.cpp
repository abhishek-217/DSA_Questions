class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int len = arr.size();

        if(len== 0)     return {};
        if(len== 1)     return {1};
        
        vector<int>temp(arr);
        map<int,int>mp;
       
        sort(temp.begin(), temp.end());
        int rank= 1;
        mp[temp[0]]=rank;

        for(int i=1; i<len; i++){

            if(temp[i] == temp[i-1]){
                mp[temp[i]] = rank;
            }else{

                rank++;
                mp[temp[i]]=rank;
            }
        }

        for(int i =0; i<len; i++){

            arr[i] = mp[arr[i]];
        }

        return arr;
    }
};