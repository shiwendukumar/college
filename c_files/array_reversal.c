#include <stdio.h>

int main()
{
    //Get number of elements in array from user
    int len;
    printf("Enter Length: ");
    scanf("%d", &len);

    //Get user input
    int numbers[len];
    for (int i = 0; i < len; i++)
    {
        printf("Number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    printf("\n");

    //Print the original pattern
    printf("Original series: ");
    for (int j = 0; j < len; j++)
    {
        printf("%d ", numbers[j]);
    }

    //Reverse the values in array
    int x = 0;
    if (len % 2 == 0)
    {
        x = (len/2);
    }
    else if (len % 2 != 0)
    {
        x = (len+1)/2;
    }

    for (int k = 0; k < x; k++)
    {
        int temp = numbers[len-1-k];
        numbers[len-1-k] = numbers[k];
        numbers[k] = temp;
    }
    printf("\n");

    //Print the reversed series
    printf("Reversed series: ");
    for (int l = 0; l < len; l++)
    {
        printf("%d ", numbers[l]);
    }

    return 0;
}