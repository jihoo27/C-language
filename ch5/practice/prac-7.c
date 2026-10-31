#include <stdio.h>

int main(void) {
    int x;

    scanf("%d", &x);
    x = x + 3;
    printf("%d\n", x);
    printf("%d %d %d\n", x - 1, x - 3, x);

    return 0;
}