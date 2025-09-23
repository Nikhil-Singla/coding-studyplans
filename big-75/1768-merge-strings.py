'''
1768. Merge Strings Alternately

Easy
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with 
word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
'''

class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        n = len(word1)
        m = len(word2)
        
        lower_range = min(n, m)
        ans = []

        for i in range(lower_range):
            ans.append(word1[i])
            ans.append(word2[i])

        ans += word1[lower_range:]
        ans += word2[lower_range:]

        return ''.join(ans)
