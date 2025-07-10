class Solution(object):
    def flipAndInvertImage(self, image):
        """
        :type image: List[List[int]]
        :rtype: List[List[int]]
        """
        n = len(image)
        print(n)

        for j in range(n):
            for i in range(n/2):
                image[j][i], image[j][n-1-i] = image[j][n-1-i], image[j][i]

        for i in range(n):
            for j in range(n):
                if(image[i][j] == 1):
                    image[i][j] = 0
                else:
                    image[i][j] = 1


        return image