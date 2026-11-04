#include <stdio.h>

int main(void) {
    int a[4][4] = {0};
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            a[i][3] += a[i][j];
            a[3][j] += a[i][j];
            a[3][3] += a[i][j];
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (j > 0) {
                printf(" ");
            }
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}