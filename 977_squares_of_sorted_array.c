#include<stdio.h>
#include <stdlib.h>

/*

给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。

示例 1： 输入：nums = [-4,-1,0,3,10] 输出：[0,1,9,16,100] 解释：平方后，数组变为 [16,1,0,9,100]，排序后，数组变为 [0,1,9,16,100]

示例 2： 输入：nums = [-7,-3,2,3,11] 输出：[4,9,9,49,121]

*/

int nums[5] = {-4,-1,0,3,10};

int* squareArray(int* array, int arraySize){
    int* res = (int*)malloc(sizeof(int) * arraySize);
    int i = 0;
    int j = arraySize - 1;

    for(int k = arraySize - 1; k >= 0 ; k--){
        if((array[i] * array[i]) > (array[j] * array[j])){
            res[k] = (array[i] * array[i]);
            i++;
        }
        else{
            res[k] = (array[j] * array[j]);
            j--;
        }
    } 

    return res;
}

int main(){
    int* result = squareArray(nums,5);
    for(int cursor = 0; cursor <= 4; cursor++){
        printf("%d\n",result[cursor]);
    }
    
    return 0;
}