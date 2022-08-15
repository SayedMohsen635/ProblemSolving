/* k is always positive number */

void rotate(int* nums, int numsSize, int k){
    /* Time Complexity O(n*n) */
    /*    
        int i , temp , j;
        for(j = 0; j < k; j++){
            temp = nums[numsSize - 1];
            for(i = numsSize - 1; i > 0; i--){
                nums[i] = nums[i - 1];
            }
            nums[i] = temp;
        }
    */
    /* Time Complexity O(n) */
    k %= numsSize;
    reverse(nums , 0 , numsSize - 1 - k);
    reverse(nums , numsSize - k , numsSize - 1);
    reverse(nums , 0 , numsSize - 1);
}

/* It's used to reverse the array */
void reverse(int* nums , int start , int end){
    while(start < end){
        int temp = nums[end];
        nums[end] = nums[start];
        nums[start] = temp;
        start++;
        end--;
    }
}