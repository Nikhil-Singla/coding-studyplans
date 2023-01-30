## BASE Code passing testcases
class Solution:
    def tribonacci(self, n: int) -> int:
        t0, t1, t2 = 0, 1, 1
        if n == 0:
            return t0
        if n == 1:
            return t1
        if n == 2:
            return t2
        for i in range(3,n+1):
            sum = t0 + t1 + t2
            t0, t1, t2 = t1, t2, sum
        return sum

## Solution using Arrays
class Solution:
    def tribonacci(self, n: int) -> int:
        t = [0, 1, 1]
        if n == 0:
            return t[0]
        if n == 1:
            return t[1]
        if n == 2:
            return t[2]
        for i in range(3,n+1):
            t.append(t[i-1] + t[i-2] + t[i-3])
        return t[n]

## More conscise solution 
class Solution:
    def tribonacci(self, n: int) -> int:
        if(n==0):
            return 0
        a, b, c = 0, 1, 1
        for _ in range(n-2): a, b, c = b, c, a+b+c
        return c