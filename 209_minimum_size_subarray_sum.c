#include<stdio.h>
#include <limits.h>
#include<math.h>

/*

给定一个含有 n 个正整数的数组和一个正整数 s ，找出该数组中满足其和 ≥ s 的长度最小的 连续 子数组，并返回其长度。如果不存在符合条件的子数组，返回 0。

示例：

输入：s = 7, nums = [2,3,1,2,4,3] 输出：2 解释：子数组 [4,3] 是该条件下的长度最小的子数组。

提示：

1 <= target <= 10^9
1 <= nums.length <= 10^5
1 <= nums[i] <= 10^5

*/

int nums[6] = {2,3,1,2,4,3};

int minSubArrayLen(int target, int* nums, int numsSize){
    int left = 0, right = 0, sum = 0, minLen = INT_MAX;
    while(right < numsSize){
        sum += nums[right];
        right++;
        while(sum >= target){
            minLen = fmin(minLen, right - left);
            sum -= nums[left];
            left++;
        }
    }
    return minLen == INT_MAX ? 0 : minLen;
}



int main(){
    int result = minSubArrayLen(7, nums, 6);
    printf("%d",result);
}