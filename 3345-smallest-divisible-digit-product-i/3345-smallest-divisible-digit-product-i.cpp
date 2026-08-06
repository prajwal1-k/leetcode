class Solution {
public:
    int smallestNumber(int n, int t) {
        while(productDigit(n) % t != 0){
            n++;
        }
        return n;
    }
    int productDigit(int num){
        int product = 1;

        while(num){
            product *= num % 10;
            num /= 10;
        }
        return product;
    }
};