#include <stdio.h>

int main(void) {
    int n = 4;
    char ch = 'a';
    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%d", num++);
            if (j < n - i + 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}