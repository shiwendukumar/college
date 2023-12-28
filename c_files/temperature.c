#include<stdio.h>

int main(void)
{
    float temp;
    printf("Temp: ");
    scanf("%f", &temp);

    float temp_in_f = (temp * (9.0/5.0)) + 32;

    printf("Temperature in Celcius = %f.\n", temp);
    printf("Temperature in Farhenheit = %f.\n", temp_in_f);

    return 0;
}