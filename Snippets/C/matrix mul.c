#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a[10][10], b[10][10], mul[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    system("cls");   // clear teh screen
    printf("Enter rows and columns of the first matrix: ");
    if (scanf("%d %d", &r1, &c1) != 2) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Enter rows and columns of the second matrix: ");
    if (scanf("%d %d", &r2, &c2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    /* Check valid dimensions */
    if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
        r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10) {
        printf("Invalid dimensions. Use values from 1 to 10.\n");
        return 1;
    }

    /* Check whether multiplication is possible */
    if (c1 != r2) {
        printf("Matrix multiplication is not possible "
               "(columns of first must equal rows of second).\n");
        return 1;
    }

    printf("Enter the elements of the first matrix (%d x %d):\n", r1, c1);
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the elements of the second matrix (%d x %d):\n", r2, c2);
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    /* Multiply */
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            mul[i][j] = 0;
            for (k = 0; k < c1; k++)
                mul[i][j] += a[i][k] * b[k][j];
        }
    }

    /* Print result */
    printf("Result of multiplication (%d x %d):\n", r1, c2);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d\t", mul[i][j]);
        printf("\n");
    }
    return 0;
}