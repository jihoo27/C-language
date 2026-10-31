#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    int step = (a <= b) ? 1 : -1;

    for (int i = 1; i <= 9; i++) {
        for (int d = a; ; d += step) {
            printf("%d * %d = %2d", d, i, d * i);
            if (d == b)
                break;
            printf("   ");
        }
        printf("\n");
    }

    return 0;
}