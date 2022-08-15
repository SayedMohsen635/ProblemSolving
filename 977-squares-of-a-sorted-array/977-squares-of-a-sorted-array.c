

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int* returnArr = (int*) malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    for(int i = 0 , j = numsSize - 1 , k = numsSize - 1; i <= j; k--){
        if(abs(nums[j]) > abs(nums[i])){
            returnArr[k] = nums[j] * nums[j];
            j--;
        }else{
            returnArr[k] = nums[i] * nums[i];
            i++;
        }
    }
    
    return returnArr;
}