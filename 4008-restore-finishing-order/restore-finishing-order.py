class Solution:
    def recoverOrder(self, o: List[int], f: List[int]) -> List[int]:
        f = set(f)
        return list(filter(lambda x: x in f, o)) #just check order id is present in frnd list
