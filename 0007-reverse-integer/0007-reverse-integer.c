int reverse(int x){ 
    long v = 0 ; // Here v is the value assigned at 0
    do{
        v = v*10 + (x%10);
        x = x/10;
    }while(x);

    return (v < INT_MIN || v > INT_MAX) ? 0 : v;
}