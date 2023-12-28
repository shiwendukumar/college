#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a;
    int *b;

    // Allocate memory for the pointers
    a = (int *)malloc(sizeof(int));
    b = (int *)malloc(sizeof(int));

    if (a == NULL || b == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Exit with an error code
    }

    printf("A: ");
    scanf("%d", a);

    printf("B: ");
    scanf("%d", b);

    printf("\nBefore: \nA = %d \nB = %d \n", *a, *b);

    int temp = *a;
    *a = *b;
    *b = temp;

    printf("\nAfter: \nA = %d \nB = %d \n", *a, *b);

    // Free the allocated memory
    free(a);
    free(b);

    return 0;
}
