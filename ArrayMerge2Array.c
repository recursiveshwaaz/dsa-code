#include <stdio.h>
int main() {
    int a[] = {1, 3, 5}, b[] = {2, 4, 6}, c[6];
    int i, j, k = 0;
    for (i = 0; i < 3; i++)
        c[k++] = a[i];
    for (j = 0; j < 3; j++)
        c[k++] = b[j];
    printf("Merged array: ");
    for (i = 0; i < 6; i++)
        printf("%d ", c[i]);
    return 0;
}

