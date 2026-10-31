#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (i - 1) * 2; j++) {
            printf(" ");
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