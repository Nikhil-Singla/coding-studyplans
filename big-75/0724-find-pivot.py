class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        pivotSum = sum(nums)
        ongoing = 0
        for idx, i in enumerate(nums):
            pivotSum -= i

            if ongoing == pivotSum/2:
                return idx

            pivotSum += i
            ongoing += i
                
        return -1
