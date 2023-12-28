#include <stdio.h>

int main()
{
    char x;
    printf("Input: ");
    scanf("%c", &x);

    if ((x >= 65 && x <=90) || (x >= 97 && x <= 122))
    {
        printf("Yes an alphabet.");
    }
    else
    {
        printf("No not an alphabet.");
    }

    return 0;
}