#include <ctype.h>
#include <stdio.h>

int main()
{
    char x;
    printf("Input: ");
    scanf("%c", &x);

    if (isalpha(x))
    {
        printf("Yes it is an alphabet.");
    }
    else
    {
        printf("Not an alphabet.");
    }
     
    return 0;
}