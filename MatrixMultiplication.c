/*
 *
 *  Multiplication of two matrix
 *  Let Matrix A be of oreder m x n
 *  Let Matrix B be of  order p x q
 *  We can only multiply A and B iff n == p
 *
 *  Shubham Srivastava<shbm09@gmail.com>
 */

#include <stdio.h>

int main() {
    printf("For FIRST MATRIX\n");
    int a_row, a_col, b_row, b_col;
    printf("Enter the number of rows\n");
    scanf("%d", &a_row);
    printf("Enter the number of colomns\n");
    scanf("%d", &a_col);
    printf("\n\n---\n\n");
    printf("For SECOND MATRIX\n");
    printf("Enter the number of rows\n");
    scanf("%d", &b_row);
    printf("Enter the number of colomns\n");
    scanf("%d", &b_col);
    if(a_col != b_row) {
        printf("Matrices CAN NOT be multiplied\n");
        return 0;
    }
    int matrixA[a_row][a_col];
    int matrixB[b_row][b_col];
    printf("Enter the elements of the FIRST MATRIX row wise\n");
    int i = 0, j = 0;
    for(i = 0; i < a_row; i++) {
        for (j = 0; j < a_col; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("Enter the elements of the SECOND MATRIX row wise\n");
    i = 0;
    j = 0;
    for(i = 0; i < b_row; i++) {
        for (j = 0; j < b_col; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }
    int matrixC[a_col][b_row];
    //ALGORITHM FOR MULTIPLICATION
    //for i =1 to rows [A]
    //    for j = 1 to columns [B]
    //        C[i, j] =0
    //        for k = 1 to columns [A]
    //            C[i, j]=C[i, j]+A[i, k]*B[k, j]
    int k = 0;
    for(i = 0; i < a_row; i++) {
        for(j = 0; j < b_col; j++) {
            matrixC[i][j] = 0;
            for(k = 0; k < a_col; k++) {
                matrixC[i][j] = matrixC[i][j] + matrixA[i][k]*matrixB[k][j];
            }
        }
    }
    printf("MATRIX A\n");
    for (i = 0; i < a_row; i++) {
        for (j = 0; j < a_col; j++) {
            printf("%d    ", matrixA[i][j]);
        }
        printf("\n\n");
    }
    printf("MATRIX B\n");
    for (i = 0; i < b_row; i++) {
        for (j = 0; j < b_col; j++) {
            printf("%d    ", matrixB[i][j]);
        }
        printf("\n\n");
    }
    printf("AxB =>\n");
    for (i = 0; i < a_col; ++i) {
        for (j = 0; j < b_row; j++) {
            printf("%d    ", matrixC[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
