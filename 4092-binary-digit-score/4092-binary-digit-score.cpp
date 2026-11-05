class Solution {
public:
    int calculateScore(int a, int b) {
        int s1=0;
        int s2=0;
        int score=0;
        for(int i=0;i<32;i++){
            if(a & (1 << i)) s1++;
            if(b & (1 << i)) s2++;
        }
        if (s1>=s2) score=s1*s2;
        else score=s2/s1;
        return  score;
    }
};