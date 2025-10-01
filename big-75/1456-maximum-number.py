class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        s = list(s)
        vowels = "aeiou"

        window = deque(s[:k])

        ans = 0
        for i in window:
            if i in vowels:
                ans += 1

        retval = ans
        for i in s[k:]:
            window.append(i)
            j = window.popleft()
            if i in vowels:
                ans += 1
            if j in vowels:
                ans -= 1

            retval = max(retval, ans)

        return retval
