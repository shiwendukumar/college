#include <stdio.h>

int main()
{
    //Get user input
    int numbers[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    printf("\n");

    //Print the original pattern
    printf("Original series: ");
    for (int j = 0; j < 6; j++)
    {
        printf("%d ", numbers[j]);
    }

    //Reverse the values in array
    for (int k = 0; k < 3; k++)
    {
        int temp = numbers[5-k];
        numbers[5-k] = numbers[k];
        numbers[k] = temp;
    }
    printf("\n");

    //Print the reversed series
    printf("Reversed series: ");
    for (int l = 0; l < 6; l++)
    {
        printf("%d ", numbers[l]);
    }

    return 0;
}