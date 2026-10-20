class Solution:
    def isPalindrome(self, s: str) -> bool:
        lower = s.lower()
        lower = lower.replace(" ", "")
        lower = "".join(c for c in lower if c.isalnum())
        chars = list(lower)
        reverse_string = []

        for i in range(len(chars)-1, -1, -1):
            reverse_string.append(chars[i])


        reverse_result = "".join(reverse_string)
        print (s)
        print (reverse_result)
        return (reverse_result == lower)

