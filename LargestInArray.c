/*
 *  Largest array in an array
 *  Shubham Srivastava <shbm09@gmail.com>
 *
 */

#include <stdio.h>
#include <limits.h>

int main() {
    int arrayLength;
    printf("Enter the length of array\n");
    scanf("%d", &arrayLength);
    int a[arrayLength];
    //Taken INT_MAX to prevent using an extra array!
    int min = INT_MAX;
    int i;
    printf("Enter the array elements\n");
    for(i = 0; i < arrayLength; i++) {
        scanf("%d", &a[i]);
        if(min > a[i]) {
            min = a[i];
        }
        printf("Min is %d\n", min);
    }
    printf("Lowest number in the array is %d\n", min);
    return 0;
}
