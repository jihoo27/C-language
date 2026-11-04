#include <stdio.h>

int main(void) {
    int a[10];
    int i;
    int oddSum = 0, evenSum = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++) {
        if ((i + 1) % 2 == 1) {
            oddSum += a[i];
        } else {
            evenSum += a[i];
        }
    }

    printf("odd : %d\n", oddSum);
    printf("even : %d\n", evenSum);

    return 0;
}