#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int num = 1;
    char ch = 'A';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%d ", num++);
        }
        for (int j = 1; j <= i; j++) {
            printf("%c", ch++);
            if (j < i)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}