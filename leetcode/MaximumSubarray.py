class Solution:
    def maxSubArray(self, nums) -> int:
        maxSub = nums[0]
        sum = 0
        for n in nums:
            sum += n
            if sum < 0:
                sum = 0
            maxSub = max(maxSub, sum)
        return maxSub
            