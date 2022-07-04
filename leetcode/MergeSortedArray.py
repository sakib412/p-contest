from typing import List


class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        for i in range(m+n):
            if i <= m-1:
                continue
            nums1[i] = nums2[i - m]
        nums1.sort()
        print(nums1)


    def merge2(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        for i in range(n):
            nums1[-i-1] = nums2[i]
        nums1.sort()
        print(nums1)


a = Solution()
a.merge([1, 2, 3, 0, 0, 0], 3, [2, 5, 6], 3)
a.merge2([1, 2, 3, 0, 0, 0], 3, [2, 5, 6], 3)
