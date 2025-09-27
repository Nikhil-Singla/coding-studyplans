class Solution:
    def maxArea(self, height: List[int]) -> int:
        n = len(height)

        left = 0
        right = n-1

        ans = 0

        while (left < right):
            flag = True
            if height[left] < height[right]:
                fill_line = height[left]
                flag = True
            else:
                fill_line = height[right]
                flag = False
            
            width = right - left
            ans = max(ans, width*fill_line)

            if flag:
                left += 1
            else:
                right -= 1

        return ans