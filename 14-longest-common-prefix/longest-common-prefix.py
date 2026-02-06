class Solution:
    def longestCommonPrefix(self, stars: List[str]) -> str:
        stars = sorted(stars)
        ans = ""
        head = stars[0]
        tail = stars[-1]
        for i in range(min(len(head), len(tail))):
            if head[i] != tail[i]: return ans
            ans += head[i]

        return ans

#TC: O(sort algo) = O(nlogn)
#SC: O(head + tail) = O(2n) = O(n) - as they are similar to list len in worst case

        