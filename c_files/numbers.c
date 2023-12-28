#include<stdio.h>

int main(void)
{
    printf("Odd numbers: \n");
    for (int i = 1; i < 100; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d, ", i);
        }
    }

    printf("\n\nEven numbers: \n");
    for (int i = 1; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}