#include<stdio.h>

int main(void)
{
    int a, b;
    printf("A: ");
    scanf("%d", &a);

    printf("B: ");
    scanf("%d", &b);

    int sum = a + b;
    int diff = a - b;
    int mul = a * b;
    int quotient = a / b;
    int rem = a % b;

    printf("Sum = %d\n", sum);
    printf("Subtraction = %d\n", diff);
    printf("Multiplication = %d\n", mul);
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", rem);

    return 0;
}