bool isPalindrome(int x) {
    if(x < 0 || (x % 10 == 0 && x != 0)){
        return false;
    }
    int reverse = 0;
    while(x > reverse){
        reverse = reverse * 10 + x % 10;
        x/=10;
    }
    return x == reverse || x == reverse/10;  // x == reverse is for even digit & x == reverse/10 is for odd digit
}
