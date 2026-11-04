#include <stdio.h>

int main(void) {
    int a[10];
    int i;
    int max, min;

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];
    for (i = 1; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("%d %d\n", max, min);

    return 0;
}