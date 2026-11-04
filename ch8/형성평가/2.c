#include <stdio.h>

int main(void) {
    int a[5];
    int i;
    int sum = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i += 2) {
        sum += a[i];
    }

    printf("%d\n", sum);

    return 0;
}