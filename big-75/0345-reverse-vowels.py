class Solution:
    def reverseVowels(self, s: str) -> str:
        vowels = "aeiouAEIOU"

        start = 0
        s = list(s)

        end = len(s) - 1

        while(start < end):
            while s[start] not in vowels and (start < end):
                start += 1
            
            while s[end] not in vowels and (start < end):
                end -= 1

            if start < end:
                s[start], s[end] = s[end], s[start]
                start += 1
                end -= 1

        return "".join(s)