class Solution {
    public int firstUniqChar(String s) {
        
        int ans = -1;

        // Use map or list

        // int[] arr = new int[26];

        // for(int i=0; i<s.length(); i++){
        //     arr[s.charAt(i) - 'a'] += 1;
        // }
        // for(int i=0; i<s.length(); i++){
        //     if (arr[s.charAt(i) - 'a'] == 1){
        //         return i;
        //     }
        // }

        Map<Character,Integer>mp = new HashMap<>();

        for(int i=0; i<s.length(); i++){
            char c = s.charAt(i);

            mp.put(c, mp.getOrDefault(c,0)+1);
        }
        for(int i=0; i<s.length(); i++){
            char c = s.charAt(i);

            if(mp.containsKey(c) && mp.get(c) == 1){
                return i;
            }
        }



        return ans;

    }
}
