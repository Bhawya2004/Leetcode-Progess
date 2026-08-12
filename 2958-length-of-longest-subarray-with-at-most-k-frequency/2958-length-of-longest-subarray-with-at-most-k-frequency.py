class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
        n=len(nums)
        i=0
        j=0
        res=0
        map={}
        while j<n:
            map[nums[j]]=map.get(nums[j],0)+1
            while i<j and map[nums[j]]>k:
                map[nums[i]]-=1
                i+=1
            res=max(res,j-i+1)
            j+=1
        return res
        