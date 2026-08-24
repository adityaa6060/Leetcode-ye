/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    *returnSize = n;
    int* arr = (int*)malloc(n * sizeof(int));
    int left=0;
    int right= n-1;
    int val=1;

    while(left<right){
        arr[left]= val;
        arr[right]= -val;
        left++;
        right--;
        val++;
    }
    if(left==right){
        arr[left]=0;
    }
    return arr;
}

    
