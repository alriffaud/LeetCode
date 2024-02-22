class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        n = len(nums)
        i = 1
        sum = nums[0]
        while i < n:
            nums[i] += sum
            sum = nums[i]
            i += 1
        return (nums)
