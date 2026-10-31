#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    switch (ch) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Usually\n");
            break;
        default:
            printf("error\n");
            break;
    }

    return 0;
}