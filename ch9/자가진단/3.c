#include <stdio.h>

int main(void) {
    int a[1000];
    int n;
    int i;

    scanf("%d", &n);

    a[0] = 100;
    a[1] = n;
    printf("%d %d ", a[0], a[1]);

    i = 2;
    while (1) {
        a[i] = a[i - 2] - a[i - 1];
        printf("%d ", a[i]);
        if (a[i] < 0) {
            break;
        }
        i++;
    }
    printf("\n");

    return 0;
}