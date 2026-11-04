#include <stdio.h>

int main(void) {
    int a[100];
    int n = 0;
    int i;
    int count = 0, sum = 0;
    double avg = 0.0;

    while (n < 100) {
        scanf("%d", &a[n]);
        if (a[n] == 0) {
            break;
        }
        n++;
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 5 == 0) {
            count++;
            sum += a[i];
        }
    }

    if (count > 0) {
        avg = (double)sum / count;
    }

    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}