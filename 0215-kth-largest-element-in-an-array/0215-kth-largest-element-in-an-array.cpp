class Solution {
public:

    void Heapify(vector<int>& num, int size, int i){

        // 0 indexing follow
        int largest = i;
        int left = 2*i +1;
        int right = 2*i +2;

        if(left < size && num[largest] <  num[left]){
            largest = left;
        }
        if(right < size && num[largest] <  num[right]){
            largest = right;
        }

        if(largest != i){
            swap(num[largest], num[i]);
            Heapify(num, size, largest);
        }
    }

    vector<int> sortnum(vector<int>& num){
        int l = num.size();

        for(int i = l/2-1; i>=0; i--){
            Heapify(num, l, i);
        }

        for(int i = l-1; i>=0; i--){
            swap(num[0], num[i]);
            Heapify(num, i, 0);
        }

        return num;
    }
    int findKthLargest(vector<int>& nums, int k) {

        sortnum(nums);
        int l = nums.size();
        return nums[l-k];
    }
};