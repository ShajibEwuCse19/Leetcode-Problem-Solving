class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        curr = arr[-1]
        arr[-1] = -1

        for i in range(len(arr)-2, -1, -1):
            temp = arr[i]
            arr[i] = curr
            curr = max(curr, temp)

        return arr

#TC: O(len(arr)) = O(n)
#SC: no extra space = O(1)
        