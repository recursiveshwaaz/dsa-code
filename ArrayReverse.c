#include <stdio.h>
int main() {
    int a[] = {1, 2, 3, 4, 5}, i;
    int n = 5;
    for (i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
