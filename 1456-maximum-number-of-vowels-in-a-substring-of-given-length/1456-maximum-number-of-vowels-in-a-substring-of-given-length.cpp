class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();

        int vowel =0, ans =0;

        for(int i=0; i<k; i++){
            if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u'){

                vowel++;
            }
        }

        ans = vowel;
        for(int i=k; i<n; i++){
            if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u'){

                vowel++;
            }
            if(s[i-k] == 'a' || s[i-k] == 'e' ||s[i-k] == 'i' ||s[i-k] == 'o' ||s[i-k] == 'u'){

               vowel--;
            }

           ans = max(ans, vowel);

        }
        

        return ans;


    }
};