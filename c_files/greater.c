#include<stdio.h>

int main(void)
{
    int a, b;
    printf("A: ");
    scanf("%d", &a);

    printf("B: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("A = %d is greater.\n", a);
    }
    else if(b > a)
    {
        printf("B = %d is greater.\n", b);
    }
    else
    {
        printf("Both numbers are equal.\n");
    }

    return 0;
}