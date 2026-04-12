class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        num = x
        rev_num = 0
        while x!=0:
            l_dig = x % 10
            x = x//10
            rev_num = rev_num * 10 + l_dig
        return rev_num == num
