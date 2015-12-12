/*
 *  To demonstrate reverse of a number.
 *  Shubham Srivastava<shbm09@gmail.com>
 *
 */

#include <stdio.h>

int main() {
    int a = 10;
    int b = 15;
    printf("Before Swap (a, b): %d %d\n", a, b);
    int t = a;
    a = b;
    b = t;
    printf("After Swap (a, b): %d %d\n", a, b);
}
