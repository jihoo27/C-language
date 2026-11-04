#include <stdio.h>

int main(void) {
    int a[20];
    int n;
    int i, j, tmp;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n -1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    printf("\n");

    return 0;
}