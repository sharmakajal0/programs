def two_sum(nums, target):
    # The below commented solution is not for the worst case scenario and will not work when the input is too big
    # res = []
    # for i in range(0, len(nums)):
    #     for j in range(i + 1, len(nums)):
    #         if nums[i] + nums[j] == target:
    #             return [i, j]
    h = {}
    for i, num in enumerate(nums):
        sum = target - num
        if sum not in h:
            h[num] = i
        else:
            return [h[sum], i]

nums = [2, 6, 7, 5, 43, 21, 3, 5, 17, 27]
target = 44
res = two_sum(nums, target)
print(res)