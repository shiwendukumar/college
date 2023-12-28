#include<stdio.h>

int main(void)
{
    int a, b;
    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    int sum = a + b;
    printf("Sum = %d", sum);
    return 0;
}