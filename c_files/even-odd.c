#include<stdio.h>

int main(void)
{
    int a;
    printf("a: ");
    scanf("%d", &a);

    if (a % 2 != 0)
    {
        printf("A is an odd number.\n");
    }
    else if (a % 2 == 0)
    {
        printf("A is an even number.\n");
    }

    return 0;
}