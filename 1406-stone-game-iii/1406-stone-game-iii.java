class Solution {
    int[] dp;
    int n;

    public int solve(int i, int[] stones){
        if(i>=n){
            return 0;
        }
        if (dp[i]!=-1){
            return dp[i];
        }
        int result=Integer.MIN_VALUE;
        result=Math.max(result,stones[i]-solve(i+1,stones));
        if (i+1 < n){
            result=Math.max(result,stones[i]+stones[i+1]-solve(i+2,stones));
        }
        if (i+2 < n){
            result=Math.max(result,stones[i]+stones[i+1]+stones[i+2]-solve(i+3,stones));
        }
        return dp[i]=result;
    }

    public String stoneGameIII(int[] stones) {
        n=stones.length;
        dp = new int[n];
        Arrays.fill(dp,-1);

        int result=solve(0,stones);
        if (result>0){
            return "Alice";
        }else if (result < 0){
            return "Bob";
        }
        return "Tie";
    }
}