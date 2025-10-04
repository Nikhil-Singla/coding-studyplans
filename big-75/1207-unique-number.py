class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        count = Counter(arr)

        freq = [0] * 1001

        for i in count.values():
            if freq[i]:
                return False

            freq[i] += 1

        return True
