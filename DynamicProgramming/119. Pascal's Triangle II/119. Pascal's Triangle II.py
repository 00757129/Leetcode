class Solution:
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        result = []
        for i in range(rowIndex + 1):
            temp = []
            for j in range(i + 1):
                if j== 0:
                    temp.append(1)
                elif j == i:
                    temp.append(1)
                else:
                    temp.append(result[i - 1][j - 1] + result[i - 1][j])
            result.append(temp)
        return result[rowIndex][:]
