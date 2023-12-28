#include<stdio.h>

int main(void)
{
    int a;
    printf("a: ");
    scanf("%d", &a);

    while (a != 0)
    {
        int last_digit = a % 10;
        printf("%d", last_digit);
        a /= 10;
    }

    return 0;
}