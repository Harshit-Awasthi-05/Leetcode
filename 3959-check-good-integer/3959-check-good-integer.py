class Solution:
    def checkGoodInteger(self, n: int) -> bool:
        digitSum=0
        squareSum=0
        while(n>0):
            rem=n%10
            digitSum+=rem
            squareSum+=(rem*rem)
            n//=10
        return True if (squareSum-digitSum)>=50 else False 