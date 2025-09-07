class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        n = len(nums)
        start = 0

        while start < n:
            if nums[start] == val:
                if nums[n-1] != val:
                    nums[start], nums[n-1] = nums[n-1], nums[start]
                    start += 1

                else: 
                    n -= 1

            else:
                start += 1



        
        return start