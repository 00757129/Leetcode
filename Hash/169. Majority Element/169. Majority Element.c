int majorityElement(int* nums, int numsSize) {
    int count=1;
        int tmp=nums[0];
        for(int i=1;i<numsSize;i++){
            if(tmp==nums[i]){
                count++;
            }else if(count>0){
                count--;
            }
            else{
                tmp=nums[i];
                count++;
            }
        }
        return tmp;
}
