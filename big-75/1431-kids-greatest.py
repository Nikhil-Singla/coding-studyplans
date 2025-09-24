class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        highest = max(candies)
        ans = [(i+extraCandies) >= highest for i in candies]

        return ans