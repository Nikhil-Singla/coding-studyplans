# [solved-medium] [first-attempt] [custom-logic]
class Solution:
    def reverseWords(self, s: str) -> str:
        # s = s.split()
        # s.reverse()

        word_list = []
        word = []
        for i in s:
            if i == " ":
                if word:
                    word_list.append("".join(word))
                    word = []

            else:
                word.append(i)

        if word:
            word_list.append("".join(word))
            
        word_list = word_list[::-1]

        return " ".join(word_list)

# [solved-medium] [second-attempt] [in-built-functions]
class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.split()
        s.reverse()

        return " ".join(s)