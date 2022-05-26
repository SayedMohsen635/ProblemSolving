

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i , j;
    *returnSize = 2;
    returnSize = (int*)malloc(2 * sizeof(int));
    if(returnSize == 0){
        printf("Memory isn't allocated");
    }else{
        for(i = 0; i < numsSize; i++){
            for(j = 1; j < numsSize; j++){
                if(nums[i] + nums[j] == target && i != j){
                    returnSize[0] = i;
                    returnSize[1] = j;
                }
            }
        }
    }
    return returnSize;
}