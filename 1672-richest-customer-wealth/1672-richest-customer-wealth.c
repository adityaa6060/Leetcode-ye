int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int maxSoFar=0;

    for(int i=0; i<accountsSize; i++){
        int currentWealth=0;
        for(int j=0; j<accountsColSize[i]; j++){
            currentWealth = currentWealth+accounts[i][j];
        }
        if(currentWealth>maxSoFar){
         maxSoFar= currentWealth;
        }
    }
    return maxSoFar;
}