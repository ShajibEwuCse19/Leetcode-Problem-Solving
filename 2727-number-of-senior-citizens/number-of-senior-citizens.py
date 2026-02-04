class Solution:
    def countSeniors(self, details: List[str]) -> int:
        cnt = 0
        for x in details:
            a = int(x[11])
            b = int(x[12])
            age = (a*10) + b
            
            if age > 60: cnt += 1

        return cnt
        

        