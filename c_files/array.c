#include <stdio.h>

int main()
{
    int numbers[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%d, ", numbers[j]);
    }
    
    return 0;
}