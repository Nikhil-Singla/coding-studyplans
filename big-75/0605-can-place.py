class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        size = len(flowerbed)
        if size == 1:
            return not (flowerbed[0] and n)

        for i in range(size):
            if flowerbed[i] == 0:
                if (i == 0 or (flowerbed[i-1] == 0)) and ((i == size-1) or (flowerbed[i+1] == 0)):
                    n -= 1
                    flowerbed[i] = 1

                if n <= 0:
                    return True

        return False