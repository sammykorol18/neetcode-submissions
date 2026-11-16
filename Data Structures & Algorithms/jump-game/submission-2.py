class Solution:
    def canJump(self, nums: List[int]) -> bool:
        if not nums:
            return True
        if len(nums)==1:
            return True
        if (nums[0]==0):
            return False

        maxreach = nums[0]

        for i in range(1, len(nums)-1):
            maxreach = max(maxreach-1, nums[i])
            if maxreach == 0:
                return False
        return True
            
