class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        list_one = list(s)
        list_two = list(t)
        list_one.sort()
        list_two.sort()
        if list_one == list_two:
            return True
        return False