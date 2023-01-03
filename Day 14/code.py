class Solution:
    def minDeletionSize(self, A):
        s = 0
        for i in range(len(A[0])):
            for j in range(len(A)-1):
                if A[j][i] > A[j+1][i]:
                    s += 1
                    break
        return s
