#include <stdio.h>

int main(void) {
    int a[100];
    int n = 0;
    int i;

    while (n < 100) {
        scanf("%d", &a[n]);
        if (a[n] == 0) {
            break;
        }
        n++;
    }

    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}