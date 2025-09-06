class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        boxTypes.sort(key=lambda x: x[1], reverse=True)

        n = len(boxTypes)

        ans = 0

        idx = 0

        for i in range(truckSize):
            if boxTypes[n-1][0] == 0:
                break

            if boxTypes[idx][0] != 0:
                ans += boxTypes[idx][1]
                boxTypes[idx][0] -= 1

            else:
                idx += 1
                ans += boxTypes[idx][1]
                boxTypes[idx][0] -= 1

        return ans







                                              