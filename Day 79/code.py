class Solution:
    def average(self, salary: List[int]) -> float:
        m, M, total = math.inf, -math.inf, 0.0
        for s in salary:
            m, M = min(m, s), max(M, s)
            total += s
        return (total - m - M) / (len(salary) - 2)
        
