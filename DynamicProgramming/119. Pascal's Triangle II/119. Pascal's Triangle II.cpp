/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    int i,j;
    //int** array=(int**)malloc((rowindex+1)*sizeof(int*));
    int** array = (int **)malloc((rowIndex + 1) * sizeof(int *));
    *returnSize = rowIndex+1;
    for(i=0;i<rowIndex+1;i++){
        array[i]=malloc((i+1)*sizeof(int));
        for(j=0;j<i+1;j++){
            if((j==0)||(j==i)){
                array[i][j]=1;
            }else{
                array[i][j]=array[i - 1][j - 1] + array[i - 1][j];
            }
        }
    }
    return array[rowIndex];
}
