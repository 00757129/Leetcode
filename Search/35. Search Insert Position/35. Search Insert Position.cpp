int searchInsert(int* nums, int numsSize, int target){
    if(nums[numsSize-1]<target) return numsSize;
    int left=0,right=numsSize-1,mid=0;
    while(left<right){
        mid=left+(right-left)/2;
        if(nums[mid]<target){
            left=mid+1;
        }else {
            right=mid;
        }
    }
    return right;
}
