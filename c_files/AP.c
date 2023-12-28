#include<stdio.h>

int main(void)
{
    printf("This program will print an AP.\n");

    int a, diff;
    printf("a: ");
    scanf("%d", &a);

    printf("Common Difference: ");
    scanf("%d", &diff);

    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", a);
        a += diff;
    }

    return 0;
}