class ProductOfNumbers {

    vector<int>pro;
public:
    ProductOfNumbers() {
        pro = {1};
    }
    
    void add(int num) {
        if(num == 0){
            pro = {1};
        }else{
            pro.push_back(pro.back() * num);
        }
    }
    
    int getProduct(int k) {
        int n = pro.size();
        if (k >= n) return 0;
        return pro[n - 1] / pro[n - 1 - k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */