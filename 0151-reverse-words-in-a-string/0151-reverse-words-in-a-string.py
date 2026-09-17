# class Solution:
#     def reverseWords(self, s: str) -> str:
#         words = s.split()
#         words.reverse()
#         return " ".join(words)

class Solution:
    def reverseWords(self, s: str) -> str:
        words = []
        word = ""

        # Extract words manually
        for ch in s:
            if ch != ' ':
                word += ch
            else:
                if word != "":
                    words.append(word)
                    word = ""

        # Add last word
        if word != "":
            words.append(word)

        # Build answer in reverse order
        answer = ""

        for i in range(len(words) - 1, -1, -1):
            answer += words[i]

            if i != 0:
                answer += " "

        return answer