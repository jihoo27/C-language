#include <stdio.h>

int main(void) {
    int a[5][5] = {0};
    int i, j;

    a[0][0] = 1;

    for (i = 1; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0) {
                a[i][j] = a[i - 1][j];
            } else {
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            if (j > 0) {
                printf(" ");
            }
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}