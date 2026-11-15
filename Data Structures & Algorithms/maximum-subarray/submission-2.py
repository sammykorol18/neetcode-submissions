class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        if not nums:
            return 0

        if len(nums) == 1:
            return nums[0]


        maxi = nums[0]
        running = nums[0]

        for i in range(1, len(nums)):
            if (nums[i]+running>0):
                running = max(running+nums[i], nums[i])
            else: 
                running = nums[i]
            maxi = max(running,maxi)

        return maxi