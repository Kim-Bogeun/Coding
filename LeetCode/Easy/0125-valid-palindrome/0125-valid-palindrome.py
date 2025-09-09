class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = "".join([ch for ch in s if ch.isalnum()]).lower()
        
        st = 0
        end = len(s)-1

        while st <= end:
            print(s[st])
            print(s[end])

            if s[st] != s[end]:
                return False
            
            else:
                st += 1
                end -= 1

        return True