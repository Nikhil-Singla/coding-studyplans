class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        size = len(nums)

        if k == size:
            return sum(nums)/k

        curr_sum = sum(nums[:k])
        ret = curr_sum

        for i in range(k, size):
            curr_sum += nums[i] - nums[i-k]
            
            if curr_sum > ret:
                ret = curr_sum

        return ret/k
