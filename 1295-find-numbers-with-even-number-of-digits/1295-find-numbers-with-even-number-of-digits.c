int findNumbers(int* nums, int numsSize) {
    int count=0;

    for(int i=0; i<numsSize; i++){
        int n=nums[i];

    if((n>=10 && n<=99) || (n>=1000&& n<=9999) || n==100000) {
        count++;
    }
    }
    return count;
}