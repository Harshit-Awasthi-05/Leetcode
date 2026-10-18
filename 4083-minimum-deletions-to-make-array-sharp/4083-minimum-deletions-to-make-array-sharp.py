class Solution:
    def minDeletions(self, nums: list[int]) -> int:
        result=0
        n=len(nums)
        for i in range(1,n):
            xor=nums[i-1]^nums[i]
            if (xor==0):
                result+=1
        return result