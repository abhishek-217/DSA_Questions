class Solution {
    public int firstUniqChar(String s) {
        
        int ans = -1;

        // Use map or list

        int[] arr = new int[26];

        for(int i=0; i<s.length(); i++){
            arr[s.charAt(i) - 'a'] += 1;
        }
        for(int i=0; i<s.length(); i++){
            if (arr[s.charAt(i) - 'a'] == 1){
                return i;
            }
        }

        return ans;

    }
}