#include <stdio.h>

int main(void) {
    int a[10];
    int i;
    int evenSum = 0, oddSum = 0;
    double oddAvg;

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++) {
        if ((i + 1) % 2 == 0) {
            evenSum += a[i];
        } else {
            oddSum += a[i];
        }
    }

    oddAvg = (double)oddSum / 5;

    printf("sum : %d\n", evenSum);
    printf("avg : %.1f\n", oddAvg);

    return 0;
}