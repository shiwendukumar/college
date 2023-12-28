#include<stdio.h>

int main(void)
{
    int a;
    printf("a: ");
    scanf("%d", &a);

    int original = a;
    int reversed = 0;
    while (original != 0)
    {
        int last_digit = original % 10;
        reversed = (reversed * 10) + last_digit;
        original = original / 10;
    }

    if (a == reversed)
    {
        printf("Yes it is a Palindrome.\n");
    }
    else
    {
        printf("No not a Palindrome.\n");
    }
    return 0;
}