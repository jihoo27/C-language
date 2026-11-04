#include <stdio.h>

int main(void) {
    int a[4][3];
    int classSum;
    int total = 0;
    int i, j;

    for (i = 0; i < 4; i++) {
        classSum = 0;
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            classSum += a[i][j];
        }
        printf("%d\n", classSum);
        total += classSum;
    }

    printf("%d\n", total);

    return 0;
}