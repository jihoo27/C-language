#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }

    long long sum = 0;
    int count = 0;

    for (int i = a; i <= b; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            count++;
        }
    }

    printf("sum : %lld\n", sum);
    if (count > 0)
        printf("avg : %.1f\n", (double)sum / count);
    else
        printf("avg : 0.0\n");

    return 0;
}