#include <stdio.h>
int main() {
    int a[] = {1, 2, 3, 4, 5, 6}, i, even = 0, odd = 0;
    for (i = 0; i < 6; i++) {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even: %d, Odd: %d\n", even, odd);
    return 0;
}

