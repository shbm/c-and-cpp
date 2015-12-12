#include <stdio.h>

using namespace std;

int main() {
    int r, c;
    printf("Enter the nos. of rows\n");
    scanf("%d", &r);
    printf("Enter the nos. of colomns\n");
    scanf("%d", &c);
    int m_one[r][c];
    int m_two[r][c];
    int i,j;
    printf("Enter the first matrix\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m_one[i][j]);
        }
    }
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m_two[i][j]);
        }
    }
    int k,m;
    for(k = 0; k < r; k++) {
        for (m = 0; m < c; m++) {
            printf("%d", m_one[k][m]+m_two[k][m]);
        }
        printf("\n");
    }
    return 0;
}
