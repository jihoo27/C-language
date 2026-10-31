#include <stdio.h>

int main(void) {
    int n;

    while (1) {
        printf("1. Korea\n");
        printf("2. USA\n");
        printf("3. Japan\n");
        printf("4. China\n");
        printf("number? ");

        if (scanf("%d", &n) != 1)
            break;

        printf("\n");

        if (n == 1)
            printf("Seoul\n");
        else if (n == 2)
            printf("Washington\n");
        else if (n == 3)
            printf("Tokyo\n");
        else if (n == 4)
            printf("Beijing\n");
        else {
            printf("none\n");
            break;
        }

        printf("\n");
    }

    return 0;
}