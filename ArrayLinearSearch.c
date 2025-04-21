#include <stdio.h>
int main() {
    int a[] = {10, 20, 30, 40, 50}, i, key = 30, found = 0;
    for (i = 0; i < 5; i++) {
        if (a[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Element not found.\n");
    return 0;
}

