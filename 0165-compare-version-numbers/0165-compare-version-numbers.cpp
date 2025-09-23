class Solution {
public:
    int compareVersion(string version1, string version2) {

        // int v1 =0, v2 =0;

        // while(ver1[v1] != '.'){
        //     v1++;
        // }

        // string new1 = ver1.substr(0,v1);
        // while(ver2[v2] != '.'){
        //     v2++;
        // }

        // string new2 = ver2.substr(0,v2);

        // int n1,n2;
        // if(!new1.empty()){

        //     n1 = stoi(new1);
        // }
        // if(!new2.empty()){

        //     n2 = stoi(new2);
        // }

        // if(n1 > n2) {
        //     return 1;
        // }else if(n1 < n2){
        //     return -1;
        // }

        // // Else

        // string c1 = "",c2 = "";
        // bool f1 = false;
        // bool f2 = false;

        // for(int i= v1; i<ver1.size(); i++){
        //     if(ver1[i] == '.'){
        //         continue;
        //     }

        //     if(ver1[i] != '0'){
        //         f1 = true;
        //     }
        //     if(f1){
        //         c1 += ver1[i];
        //     }
        // }

        // for(int i= v2; i<ver2.size(); i++){
        //     if(ver2[i] == '.'){
        //         continue;
        //     }

        //     if(ver2[i] != '0'){
        //         f2 = true;
        //     }
        //     if(f2){
        //         c2 += ver2[i];
        //     }
        // }

        // int l1,l2;
        // if(!c1.empty()){
        //     l1 = stoi(c1);
        // }
        // if(!c2.empty()){
        //      l2 = stoi(c2);
        // }

        // if(l1 > l2) {
        //     return 1;
        // }else if(l1 < l2){
        //     return -1;
        // }

        // return 0;

        stringstream s1(version1), s2(version2);
        string token1, token2;
        while (s1.good() || s2.good()) {
            if (!getline(s1, token1, '.'))
                token1 = "0";
            if (!getline(s2, token2, '.'))
                token2 = "0";

            int num1 = stoi(token1);
            int num2 = stoi(token2);

            if (num1 < num2)
                return -1;
            if (num1 > num2)
                return 1;
        }
        return 0;
    }
};
