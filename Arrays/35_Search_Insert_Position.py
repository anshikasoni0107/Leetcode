class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        end=len(nums)
        st=0
        while st<end:
            mid = st+(end-st)//2

            if target==nums[mid]:
                return mid
            elif target<nums[mid]:
                end=mid
            else:
                st=mid+1
        return st
