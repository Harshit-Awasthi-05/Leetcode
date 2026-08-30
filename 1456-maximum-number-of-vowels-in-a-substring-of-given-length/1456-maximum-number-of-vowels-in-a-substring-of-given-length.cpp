class Solution {
public:

    bool check_vowel(char &c){
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    }

    int maxVowels(string s, int k) {
        int n=s.size();
        int i=0;
        int j=0;
        int result=0;
        int vow=0;

        while(j<n){
            if (j-i+1>k){
                if(check_vowel(s[i])){
                    vow--;
                }
                i++;
            }
            if (j-i+1<=k){
                if (check_vowel(s[j])){
                    vow++;
                    result=max(result,vow);
                }
            }
            
            j++;
        }
        return result;
    }
};