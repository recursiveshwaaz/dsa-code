#include <stdio.h>

int add(int *a, int *b) {
    return *a + *b;
}

int main() {
    int x = 5, y = 7;
    printf("Sum = %d\n", add(&x, &y));
    return 0;
}

