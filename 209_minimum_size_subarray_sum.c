#include<stdio.h>
#include <limits.h>

/*

给定一个含有 n 个正整数的数组和一个正整数 s ，找出该数组中满足其和 ≥ s 的长度最小的 连续 子数组，并返回其长度。如果不存在符合条件的子数组，返回 0。

示例：

输入：s = 7, nums = [2,3,1,2,4,3] 输出：2 解释：子数组 [4,3] 是该条件下的长度最小的子数组。

提示：

1 <= target <= 10^9
1 <= nums.length <= 10^5
1 <= nums[i] <= 10^5

*/

int minArrayLen(int* array, int arraySize, int target){
    int head = 0, tail = 0, sum = 0, minRet = arraySize;

    while (tail < arraySize)
    {
        sum = sum + array[tail];
        if (sum >= target)
        {
            while ((sum - array[head]) >= target)
            sum = sum - array[head];
            head++; 
        }
        if ((tail - head + 1) < minRet)
        {
            minRet = tail - head + 1;
        }
        tail++;
    }
    return (sum < target ) ? 0 : minRet;
}
