class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        sum=0
        nums_sum=0
        n=len(nums)
        for i in range(n+1):
            sum=sum+i
        for i in range(n):
            nums_sum=nums_sum+nums[i]
        return sum-nums_sum