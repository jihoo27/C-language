#include <stdio.h>

int main(void) {
    int n;
    int cnt = 0;
    int sum = 0;

    while (scanf("%d", &n) == 1) {
        if (n == 0)
            break;

        cnt++;
        sum += n;
    }
    printf("cnt = %d\n", cnt);
    printf("sum = %d\n", sum);
    printf("avg = %.2f\n", (double)sum / cnt);


    return 0;
}