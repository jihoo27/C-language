#include <stdio.h>

int main(void) {
    int a[5][5] = {0};
    int i, j;
    int left, right;

    a[0][0] = 1;
    a[0][2] = 1;
    a[0][4] = 1;

    for (i = 1; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            left = (j > 0) ? a[i - 1][j - 1] : 0;
            right = (j < 4) ? a[i - 1][j + 1] : 0;
            a[i][j] = left + right;
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j > 0) {
                printf(" ");
            }
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}