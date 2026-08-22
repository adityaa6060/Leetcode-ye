bool checkDivisibility(int n) {
    int sum = 0, prod = 1;
    for (int i = n; i > 0; i /= 10) {
        sum += i % 10;
        prod *= i % 10;
    }
    
    return n % (sum + prod) == 0;
}
