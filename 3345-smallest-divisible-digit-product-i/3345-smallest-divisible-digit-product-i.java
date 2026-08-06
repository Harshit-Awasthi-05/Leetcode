class Solution {
    public int smallestNumber(int n, int t) {
        int temp=0;
        for(int i=n;i<=100;i++){
            int num=1;
            int temp2=i;
            while(temp2>0){
                int rem=temp2%10;
                num*=rem;
                temp2/=10;
            }
            if(num%t==0){
                temp=i;
                break;
            }
        }
        return temp;
    }
}