class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n = len(digits)

        while n != 1 and digits[n-1] == 9:
            if digits[n-1] == 0:
                digits[n-1] = 0
                n -= 1
        


        if n != 1:
            digits[n-1] += 1
            return digits

        else:
            a = [1]
            digits[n-1] =  0
            a.extend(digits)
            return a

        return digits
