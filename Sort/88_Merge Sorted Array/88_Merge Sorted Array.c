void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int *tmp = (int *)malloc(sizeof(int)*(m+n));
    int nums1Index=0,nums2Index=0,tmpIndex = 0;

    while(nums1Index<m && nums2Index<n){
        if(nums1[nums1Index]<nums2[nums2Index]){
            tmp[tmpIndex++] = nums1[nums1Index++];
        }else{
            tmp[tmpIndex++] = nums2[nums2Index++];
        }
    }
    int i;
    if(nums1Index==m){
         for(i = nums2Index;i<n;i++)
            tmp[tmpIndex++] = nums2[i];
    }
    else if(nums2Index == n){
        for(i = nums1Index;i<m;i++)
            tmp[tmpIndex++] = nums1[i];
    }
    for(i = 0;i<m+n;i++)
        nums1[i] = tmp[i];

    free(tmp);

}
