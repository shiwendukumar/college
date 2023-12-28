#include<stdio.h>

int main(void)
{
    int a = 0, b = 1;
    printf("%d, %d, ", a, b);
    for (int i = 0; i < 100; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        printf("%ld, ", c);
    }
    return 0;
}