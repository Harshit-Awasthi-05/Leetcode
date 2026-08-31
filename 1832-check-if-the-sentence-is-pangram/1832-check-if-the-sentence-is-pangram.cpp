class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>freq(26,0);
        int n=sentence.size();
        for(int i=0;i<n;i++){
            int ch=sentence[i];
            freq[ch-'a']++;
        }

        for(int i=0;i<freq.size();i++){
            if (freq[i]==0){
                return false;
            }
        }
        return true;
    }
};