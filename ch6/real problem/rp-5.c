#include <stdio.h>

int main(void) {
    int even = 0, odd = 0;

    for (int i = 0; i < 10; i++) {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("even : %d\n", even);
    printf("odd : %d\n", odd);
    return 0;
}