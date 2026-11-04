#include <stdio.h>

int main(void) {
    int a[10][10] = {0};
    int n;
    int i, j;

    scanf("%d", &n);

    a[0][0] = 1;

    for (i = 1; i < n; i++) {
        a[i][0] = 1;
        for (j = 1; j <= i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    for (i = n - 1; i >= 0; i--) {
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