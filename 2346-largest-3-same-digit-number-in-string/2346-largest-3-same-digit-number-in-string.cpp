class Solution {
public:
    string largestGoodInteger(string num) {
        int maxi =0;
        int flag = true;
        for(int i=2; i<num.size(); i++){
            if(num[i-2] == num[i-1] && num[i-2] == num[i]){
                int r = num[i] - '0';
                maxi = max(maxi ,r);
                flag = false;
            }

        }

        if(flag){
            return "";
        }

        return to_string(maxi) + to_string(maxi) + to_string(maxi);
    }
};