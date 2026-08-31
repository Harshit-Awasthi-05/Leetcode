class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        if(k<=1):
            return 0
        n=len(nums)
        i,j,result,mult=0,0,0,1
        while(j<n):
            mult*=nums[j]

            while(mult>=k):
                mult/=nums[i]
                i+=1
            result+=(j-i+1)
            j+=1
        return result