#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, n = 5;
    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    return 0;
}

