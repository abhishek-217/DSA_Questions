class FindSumPairs {
    // private:

public:
    vector<int>arr1;
    vector<int>arr2;
    unordered_map<int,int>freq;

    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        arr1 = nums1;
        arr2 = nums2;

        for(auto num : arr2){
            freq[num]++;
        }

    }
    
    void add(int index, int val) {
        
        int oldV = arr2[index];
        freq[oldV]--; //reduce the freq

        arr2[index] += val;

        freq[arr2[index]]++; //increase the freq new one

    }
    
    int count(int tot) {
        int ans =0;

        for(int i=0; i<arr1.size(); i++){
            int req = tot - arr1[i];
            if(freq.find(req) != freq.end()){
                ans += freq[req];
            }
        }

        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */