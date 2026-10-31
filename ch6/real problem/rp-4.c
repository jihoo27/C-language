#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
    }

    printf("%.2f\n", (double)sum / n);
    return 0;
}