class Solution {
    public static int gcd(int a, int b) {
       while(b != 0){
            int temp = b;
            b = a%b;
            a = temp;
       }

       return a;
    }

    public int findGCD(int[] nums) {
        Arrays.sort(nums);

        int mini = nums[0];
        int maxi = nums[nums.length -1];

        int ans = gcd(mini,maxi);

        return ans;
    }
}