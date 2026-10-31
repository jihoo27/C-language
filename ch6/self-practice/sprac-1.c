#include <stdio.h>

int main(void) {
    char c;
    scanf(" %c", &c);

    for(int i = 0; i < 20; i++) {
        printf("%c", c);
    }
    printf("\n");

    return 0;
}