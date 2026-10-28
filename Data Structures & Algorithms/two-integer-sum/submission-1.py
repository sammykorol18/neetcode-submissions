class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        for num in nums:
            new_target = target - num
            copy = nums.copy()
            copy.remove(num)
            if new_target in copy:
                return [nums.index(num), copy.index(new_target)+1]
        