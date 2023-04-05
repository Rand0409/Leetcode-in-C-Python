#include<stdio.h>

/* 
输入: nums = [-1,0,3,5,9,12], target = 9     
输出: 4       
解释: 9 出现在 nums 中并且下标为 4  

输入: nums = [-1,0,3,5,9,12], target = 2     
输出: -1        
解释: 2 不存在 nums 中因此返回 -1 
*/

int nums[6] = {-1,0,3,5,9,12};

// int search(int* array, int arraySize, int target){
//     int i = 0;
//     int j = arraySize - 1;
//     int k = 0;

//     while (i<=j)
//     {
//         k = (i + j)/2;
//         if(nums[k]==target){
//             break;
//         }
//         else if(nums[k]>target){
//             j=k-1;
//         }
//         else{
//             i = k+1;
//         }

//     }
//     if(nums[k]==target){
//         return k;
//     }
//     if(i>j){
//         return -1;
//     }
// }

int search(int* array, int arraySize, int target){
    int i = 0;
    int j = arraySize - 1;
    int k = 0;

    while (i <= j)
    {
        k = (i + j) / 2;           
        if (array[k] == target) {
            return k;
        }
        else if (array[k] > target) {
            j = k - 1;
        }
        else {
            i = k + 1;
        }
    }

    return -1;
}

int main(){
    int result = search(nums,6,12);
    printf("%d",result);
    return 0;
}