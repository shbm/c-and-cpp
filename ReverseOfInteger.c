/*
 *
 *  Reverse of a number.
 *  Shubham Srivastava<shbm09@gmail.com>
 *  Can also be used for checking palindrome.
 *
 */

#include <stdio.h>

int main() {
    int x;
    printf("Enter an Integer\n");
    scanf("%d", &x);
    int x_copy = x;
    int d = 0;
    int reverse = 0;
    while(x_copy > 0) {
        d = x_copy % 10;
        reverse = reverse*10 + d;
        x_copy /= 10;
    }
    printf("The reverse is %d\n", reverse);
    return 0;
}
