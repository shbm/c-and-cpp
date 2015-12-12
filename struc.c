#include <stdio.h>

struct emp {
    int d;
    int salary;
};

int main() {
    struct emp employee[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter the employee date of emp %d\n", i);
        scanf("%d", &employee[i].d);
        printf("Enter the employee salary of emp %d\n", i);
        scanf("%d", &employee[i].salary);
    }
    printf("\n\n");
    for (i = 0; i < 5; i++) {
        printf("employee no. %d\n", i);
        printf("Date of joining %d\n", employee[i].d);
        printf("salary %d\n", employee[i].salary);
    }
    return 0;
}
