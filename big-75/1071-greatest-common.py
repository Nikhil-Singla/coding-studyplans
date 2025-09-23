class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        # We need to check if str1 + str2 == str2 + str1

        if str1 + str2 != str2 + str1:
            return ""

        # Euclids algorithm to get GCD
        def gcd(len1, len2):
            while len2:
                len1, len2 = len2, len1 % len2

            return len1

        # Get the section that has the GCD length in either string
        return str1[:gcd(len(str1), len(str2))]
