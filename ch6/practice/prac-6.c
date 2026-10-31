#include <stdio.h>

int main(void) {
    int score;
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &score);
        sum += score;
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", sum / 5.0);

    return 0;
}