bool isPalindrome(int x) {
    if(x<0){
    return false;
}
double rev=0, original= x;
while(x>0){
    rev= (rev*10) + (x%10);
    x=x/10;
}
return original == rev;
}