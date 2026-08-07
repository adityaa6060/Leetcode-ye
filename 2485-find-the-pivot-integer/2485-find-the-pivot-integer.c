int pivotInteger(int n) {
    int sum= n*(n+1)/2;
    int leftsum=0;
    for(int i=0; i<=n; i++){
        leftsum = leftsum +i;
        int rightsum = sum - leftsum+i;
        if(leftsum==rightsum){
            return i;
        }
    }
    return -1;
}