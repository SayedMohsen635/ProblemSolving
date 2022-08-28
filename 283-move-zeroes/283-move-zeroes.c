void moveZeroes(int* nums, int numsSize){
    int temp;
    for(int i = 0 , j = 0; i < numsSize; i++){
        if(nums[i] != 0){
            temp = nums[i];
            nums[i] = 0;
            nums[j] = temp;
            j++;
        }
    }
}