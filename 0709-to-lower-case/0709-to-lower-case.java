class Solution {
    public String toLowerCase(String s) {
        String ans = "";

        for(int i=0; i<s.length(); i++){

            // boolean islower = Character.isLowerCase(s.charAt(i));
            // if(!islower){
            //     char c = Character.toLowerCase(s.charAt(i));
            //     ans += c;
            // }else{
            //     ans += s.charAt(i);
            // }

            char c = Character.toLowerCase(s.charAt(i));
            ans += c;
        }

        return ans;
    }
}