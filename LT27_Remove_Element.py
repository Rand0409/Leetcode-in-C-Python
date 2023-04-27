class Solution:
    def RemoveElement(self, nums: list[int], val: int ) -> int:
        fast, slow = 0, 0 # fast and slow pointers
        size = len(nums)
        while fast < size:
            if nums[fast] != val:
                nums[slow] = nums[fast]
                slow += 1
            fast += 1

        return slow

Sol = Solution()
list = [1,2,3,4,5]
target = 1

print(Sol.RemoveElement(list,target))