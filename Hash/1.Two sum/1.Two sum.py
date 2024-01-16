class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        record = {}
        
        for i,n in enumerate(nums):
            m = target-n
            if m in record:
                return [record[m], i]
            else:
                record[n] = i
