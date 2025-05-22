'''Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

 

Example 1:

Input: nums = [1,1,2]
Output:
[[1,1,2],
 [1,2,1],
 [2,1,1]]
Example 2:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]'''


class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        used = [False]*len(nums)
        results = []
        path = []
        def backtrack(path):
            if len(path) == len(nums):
                results.append(path[:])
                return
            else:
                for i in range(len(nums)):
                    if used[i]:
                        continue
                    if i>0 and nums[i]==nums[i-1] and not used[i-1]:
                        continue
                    path.append(nums[i])
                    used[i] = True
                    backtrack(path)
                    path.pop()
                    used[i] = False
        backtrack(path)
        return results
