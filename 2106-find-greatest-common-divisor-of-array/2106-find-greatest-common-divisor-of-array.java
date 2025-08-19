class Solution {
    public static int gcd(int a, int b) {
        if (a == 0) {
            return b;
        }

        return gcd(b %a, a);
    }

    public int findGCD(int[] nums) {
        Arrays.sort(nums);

        int mini = nums[0];
        int maxi = nums[nums.length -1];

        int ans = gcd(mini,maxi);

        return ans;
    }
}