#include <stdio.h>

int main(void) {
    char a[10];
    int i;

    for (i = 0; i < 10; i++) {
        a[i] = i + 1;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}