/*
 *  FIBONACCI SERIES GENERATOR
 *  Shubham Srivastava <shbm09@gmail.com>
 *
 */

#include <stdio.h>

int main() {
    int x;
    printf("Enter the number to terms:\n");
    scanf("%d", &x);
    float f = 0;
    float s = 1;
    float t = f+s;
    printf("%f\n", f);
    printf("%f\n", s);
    int i = 0;
    while(i<100) {
        printf("%f\n", t);
        f = s;
        s = t;
        t = f+s;
        i++;
    }
    return 0;
}
