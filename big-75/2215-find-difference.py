class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        nums1 = list(set(nums1))
        nums2 = set(nums2)
        ans1 = []
        for i in nums1:
            if i in nums2:
                nums2.remove(i)
            else:
                ans1.append(i)

        return [ans1, list(nums2)]
