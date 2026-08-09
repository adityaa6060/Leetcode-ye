int mirrorDistance(int n) {
   double rev=0;
   int original=n;

   while(n>0){
    rev = rev*10 + (n%10);
    n = n/10;
   }
   return abs(original-rev);
}