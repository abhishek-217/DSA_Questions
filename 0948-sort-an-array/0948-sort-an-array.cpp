class Solution {
public:

    void Heapify(vector<int>&arr, int len, int i){
    // Base case

    int largest = i; // Suppose i th  node is largest
    int left = 2*i + 1;  
    int right = 2*i + 2;

    if(left < len && arr[largest] < arr[left]){ //Check if left is   biger than largest node
        largest = left;
    }

    if(right < len && arr[largest] < arr[right]){ //Check if right is biger than largest node
        largest = right;
    }

    // Check if largest element is change

    if(largest != i){
        swap(arr[largest], arr[i]); //If change then swap
        Heapify(arr, len, largest); // Let's print Heapify array
    }

}
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        for(int i = n/2-1; i>=0; i--){
            Heapify(nums, n, i);
        }

        for (int i = n - 1; i >= 0; i--) {
            // Move current root to end
            swap(nums[0], nums[i]);

            Heapify(nums, i, 0);
        }

        return nums;
    }
};