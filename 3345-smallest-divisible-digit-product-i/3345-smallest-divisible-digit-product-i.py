class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        temp=0
        for i in range(n,101):
            num=1
            temp2=i
            while temp2>0:
                rem=temp2%10
                num*=rem
                temp2//=10
            if(num%t==0):
                temp=i
                break
        return temp