int totalMoney(int n) {
    int total = 0;
    int base = 1;
    
    for (int i = 0; i < n; i++) {
        total = total + base + (i % 7);
        if (i % 7 == 6) {
            base++;
        }
    }
    
    return total;
}