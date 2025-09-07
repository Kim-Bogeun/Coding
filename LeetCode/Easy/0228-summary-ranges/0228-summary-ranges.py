class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        n = 0
        lst = []

        while n < (len(nums)) :
            start = nums[n]
            startstring = f'{start}'
            check = 0

            while n < len(nums) - 1 and nums[n + 1] == start + 1:
                start += 1
                n += 1
                check = 1

            if check == 1:
                startstring += f'->{start}'
            

            n += 1
        
            lst.append(startstring)
        
        return lst

