#include<stdio.h>

int main(void)
{
    int base, height;
    printf("Base: ");
    scanf("%d", &base);

    printf("Height: ");
    scanf("%d", &height);

    float area = (base * height) / 2.0;
    printf("Area of triangle = %.2f", area);

    return 0;
}