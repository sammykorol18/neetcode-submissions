class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:

        for i in range(len(nums)):
            current = nums[i]
            subarray = nums[i+1:]
            if current in subarray:
                return True
        return False
    