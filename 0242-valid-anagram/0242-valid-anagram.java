class Solution {
    public boolean isAnagram(String s, String t) {
        
        // Use list or map for count character

        // MAP
        if(s.length() != t.length()){
            return false;
        }

        // Map<Character,Integer>mp = new HashMap<>();

        // for(int i=0; i<s.length(); i++){
        //     char c = s.charAt(i);

        //     mp.put(c, mp.getOrDefault(c,0)+1);
        // }

        // for(int i=0; i<t.length(); i++){
        //     char c = t.charAt(i);

        //     if(!mp.containsKey(c) || mp.get(c) == 0){
        //         return false;
        //     }

          
        //     mp.put(c, mp.get(c) -1);
        // }

        // return true;


        // Uisng arrayList

        int[] freq = new int[26];

        for(int i=0; i<s.length(); i++){
            freq[s.charAt(i) - 'a'] += 1;
        }
        for(int i=0; i<s.length(); i++){

            if(freq[t.charAt(i) - 'a'] == 0){
                return false;
            }
            freq[t.charAt(i) - 'a'] -= 1;
        }

        return true;

    }
}