class Solution {
public:


    bool checkGoodInteger(int n) {
        int temp=n;
        int digitSum=0;
        int squareSum=0;
        while(n){
            int rem=n%10;
            digitSum+=rem;
            squareSum+=(rem*rem);
            n/=10;
        }
        return (squareSum-digitSum)>=50 ? true :false;
    }
};