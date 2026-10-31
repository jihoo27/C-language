#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    if (score == 0) {
        printf("zero \n");
    } else if (score > 0) {
        printf("plus \n");
    } else {
        printf("minus \n");
    }
    return 0;
}