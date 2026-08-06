int calc(int num, int t) {
    int prod = 1;
    while (num > 0) {
        int digit = num%10;
        prod = prod*digit;
        num = num/10;
    }
    return (prod%t==0);
}

int smallestNumber(int n, int t) {
    while (!calc(n, t)) {
        n++;
    }
    return n;
}