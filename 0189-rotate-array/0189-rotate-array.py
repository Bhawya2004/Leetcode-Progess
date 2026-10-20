class Solution:
    def rotate(self, nums: list[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        res=[0]*n
        for i in range(n):
            idx=(i+k)%n
            res[idx]=nums[i]
        nums[:]=res
        