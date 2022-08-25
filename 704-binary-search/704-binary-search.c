int search(int* nums, int numsSize, int target){
    int mid , left = 0 , right = numsSize - 1;
    while(left <= right){
        mid = left + (right - left) / 2;
        if(target == nums[mid]){
            return mid;
        }else if(target > nums[mid]){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}