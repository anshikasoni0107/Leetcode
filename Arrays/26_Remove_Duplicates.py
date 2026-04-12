# Problem: Remove Duplicates from Sorted Array
# Platform: LeetCode
# Approach: Two Pointers
# Time Complexity: O(n)

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        unique=0
        for j in range(1,len(nums)):
            if nums[unique]!=nums[j]:
                unique+=1
                nums[unique]=nums[j]
        return unique+1
