class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        ret = 0
        count = 0
        for i in gain:
            count += i
            ret = max(count, ret)

        return ret
