#include<stdio.h>

int main(void)
{
    int a, b;
    printf("A: ");
    scanf("%d", &a);

    printf("B: ");
    scanf("%d", &b);

    printf("Before : \nA = %d and B = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("\nAfter : \nA = %d and B = %d\n", a, b);
    return 0;
}