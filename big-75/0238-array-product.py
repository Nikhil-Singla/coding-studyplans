class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        if n < 3:
            return list(reversed(nums))

        total_product = 1
        zero_count = 0
        for i in range(n):
            if nums[i] == 0:
                zero_count += 1
            else:
                total_product *= nums[i]        

        if zero_count > 1:
            return [0] * n

        if zero_count:
            answer = [0] * n
            answer[nums.index(0)] = total_product
        else:
            answer = [total_product // i for i in nums]

        return answer