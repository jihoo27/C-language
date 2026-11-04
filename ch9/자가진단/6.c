#include <stdio.h>

int main(void) {
    int score[5][4];
    int sum;
    int i, j;

    for (i = 0; i < 5; i++) {
        sum = 0;
        for(j = 0; j < 4; j++) {
            scanf("%d", &score[i][j]);
            sum += score[i][j];
        }
        printf("%d %.1f\n", sum, (double)sum /4);
    }
    return 0;
}